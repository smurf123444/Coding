<!DOCTYPE html>
<html>
<body>

<?php
echo "My first PHP script!";
?>

<?php
$servername = "192.168.1.160";
$username = "test";
$password = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=myDB", $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    echo "Connected successfully"; 
    }
catch(PDOException $e)
    {
    echo "Connection failed: " . $e->getMessage();
    }
?>

</body>
</html>