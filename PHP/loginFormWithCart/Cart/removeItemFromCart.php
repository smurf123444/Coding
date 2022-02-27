<?php
session_start();
 $productID = $_GET['productID'];
 $newURL = "view_cart.php";
// echo print_r($_SESSION);
 //$_SESSION['cart'][$productID] = $qty;

//print_r($_SESSION);


    foreach($_SESSION['cart'] as $k => $v){
        if ($k == $productID)
            unset($_SESSION['cart'][$k]);
    }
   // echo print_r($_SESSION);
header('Location: '.$newURL);
?>