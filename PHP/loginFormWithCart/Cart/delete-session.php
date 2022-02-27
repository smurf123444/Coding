<?php
session_start();

// remove all items from the cart
foreach($_SESSION['cart'] as $key => $value) {
	unset($_SESSION['cart'][$key]);
	
	
}

	

?>