<?php
session_start();
 $productID = $_GET['productID'];
 $qty = $_GET['qty'];
 $newURL = "view_cart.php";
 //echo print_r($_SESSION);
 $_SESSION['cart'][$productID] = $qty;
// echo print_r($_SESSION);
//print_r($_SESSION);

if ($qty == 0)
{
    foreach($_SESSION['cart'] as $k => $v){
        //echo $v . '<br>';
        //echo $k . '<br>';
        if ($v == 0)
            unset($_SESSION['cart'][$k]);
    }
}
header('Location: '.$newURL);
?>