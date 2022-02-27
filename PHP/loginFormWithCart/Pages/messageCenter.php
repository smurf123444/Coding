<?php 
session_start();
	echo '<a href="../Cart/view_cart.php">View Cart</a>';
    if($_SESSION["privaleges"] === 0){
		echo'<a href="../Pages/welcome.php"> Home</a>';
	}
	if($_SESSION["privaleges"] === 1){
		echo'<a href="../Pages/vendorShop.php"> Home</a>';
	}
	if($_SESSION["privaleges"] === 2){
		echo'<a href="../Pages/moderator.php"> Home</a>';
	}
require_once 'sendMessage.php';
require_once 'recieveMessages.php';
?>