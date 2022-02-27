<?php
// Initialize the session
session_start();
 
// Check if the user is logged in, if not then redirect him to login page
if(!isset($_SESSION["loggedin"]) || $_SESSION["loggedin"] !== true){
    header("location: login.php");
    exit;
}
if(!isset($_SESSION["privaleges"]) || $_SESSION["privaleges"] !== 2){
    header("location: login.php");
    exit;
}
if(!isset($_SESSION["privaleges"]) || $_SESSION["privaleges"] !== 3){
    header("location: login.php");
    exit;
}
if( $_SESSION["privaleges"] == 1)
{
    echo "<h1>VENDOR</h1>";
}
if( $_SESSION["privaleges"] == 2)
{
    echo "<h1>MOD</h1>";
}
if( $_SESSION["privaleges"] == 3)
{
    echo "<h1>ADMIN</h1>";
}
?>
 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Welcome</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
    <style>
        body{ font: 14px sans-serif; text-align: center; }
    </style>
</head>
<body>
    <h1 class="my-5">Hi, <b><?php echo htmlspecialchars($_SESSION["username"]); ?></b>. Welcome to our site.</h1>
    <h1 class="my-5">BTC ADDRESS:  <b><?php echo htmlspecialchars($_SESSION["btcAddress"]); ?></b></h1>
    <p>
        <a href="reset-password.php" class="btn btn-warning">Reset Your Password</a>
        <a href="logout.php" class="btn btn-danger ml-3">Sign Out of Your Account</a>
    </p>
    <?php
    
    include 'test.php';
    ?>

</body>
</html>