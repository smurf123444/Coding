<!DOCTYPE html>
<html>
<body>

<?php
$db = "acore_auth";
$con = mysqli_connect("localhost:3307","root","12341234", $db);

function encrypt($user, $pass) {
  $user = strtoupper($user);
  $pass = strtoupper($pass);
  return sha1($user.':'.$pass);
}
    
    
if(!$con)
{
    echo "Not connected to DB";
}

if (!mysqli_select_db($con, $db))
{
    echo 'Database not selected';
}

    $username = $_POST['username'];
    $email = $_POST['email'];
    $expansion = $_POST['expansion'];
    $password = $_POST['sha_pass_hash'];
    $password2 = $_POST['sha_pass_hash2'];
    // generate a random salt
$salt = random_bytes(32);


function CalculateSRP6Verifier($username, $password, $salt)
{
    // algorithm constants
    $g = gmp_init(7);
    $N = gmp_init('894B645E89E1535BBDAD5B8B290650530801B18EBFBF5E8FAB3C82872A3E9BB7', 16);

    // calculate first hash
    $h1 = sha1(strtoupper($username . ':' . $password), TRUE);

    // calculate second hash
    $h2 = sha1($salt.$h1, TRUE);

    // convert to integer (little-endian)
    $h2 = gmp_import($h2, 1, GMP_LSW_FIRST);

    // g^h2 mod N
    $verifier = gmp_powm($g, $h2, $N);

    // convert back to a byte array (little-endian)
    $verifier = gmp_export($verifier, 1, GMP_LSW_FIRST);

    // pad to 32 bytes, remember that zeros go on the end in little-endian!
    $verifier = str_pad($verifier, 32, chr(0), STR_PAD_RIGHT);
    
    return $verifier;
}
$verifierOutput = CalculateSRP6Verifier($_POST['username'],$_POST['sha_pass_hash'],$salt);

    if ($password == $password2)
    {
        $password = encrypt($username, $_POST['sha_pass_hash']); //hash the password :D
        $sql = "INSERT INTO account (username, salt, verifier, expansion, email) VALUES ('$username', '$salt', '$verifierOutput','$expansion', '$email')";
        mysqli_query($con, $sql);
        echo "Query executed";
        header("refresh=2;url=index.php");
    }
    else
    {
       echo "passwords do not match";
       header("refresh=2;url=index.php");
    }


?>
</body>
</html>
