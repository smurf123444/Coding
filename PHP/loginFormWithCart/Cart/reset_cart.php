<?php 
session_start();
$newURL = "view_cart.php";
if (isset($_SESSION['cart'])) {

	$_SESSION['cart']=array();
}
header('Location: '.$newURL);
?>