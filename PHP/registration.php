<!DOCTYPE html>
<html>
<body>

<?php
$db = "zero_auth";
$con = mysqli_connect("127.0.0.1","root","", $db);

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
    
    
    if ($password == $password2)
    {
        $password = encrypt($username, $_POST['sha_pass_hash']); //hash the password :D
        $sql = "INSERT INTO account (username, sha_pass_hash, expansion, email) VALUES ('$username', '$password', '$expansion', '$email')";
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
