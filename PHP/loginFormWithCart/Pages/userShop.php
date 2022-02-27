<?php
try {
// Include the file that makes the connection to the desired database
include '../connect.php';
 
//session_start();
if(!isset($_SESSION['cart'])){
		$_SESSION['cart'] = array();
	}
$query = "SELECT * FROM categories";
	$statement = $connect ->prepare($query);
	$statement -> execute();
	$result = $statement->fetchall();
	$statement-> closeCursor();
	 

} catch (Exception $e) {

echo 'There is an error';
}
?>

<?php

function getBalance($address) {

    return file_get_contents('https://blockchain.info/q/addressbalance/'. $address);

}

//echo htmlspecialchars($_SESSION["btcAddress"]);
echo '<br>Address Balance: ' . getBalance(htmlspecialchars($_SESSION["btcAddress"]));
?> 

<!DOCTYPE html>
<html>    
<head>
    <title>Guitar Shop 2</title>
    <link rel="stylesheet" type="text/css" href= "../main.css" />
</head>
<body>
	<h1 class = "right" >Guitar Shop 2 </h1>
	<a href="messageCenter.php">Message Center</a>
	<a href="../Cart/view_cart.php">View Cart</a>
	<h2>Categories </h2>
        <!-- Show each of the categories found using a foreach loop. the $categories  variable is an array now
			 Here we use indexes to point to the location of the desired column on each record
		-->
	<ul>

        <?php 	foreach ($result  as $item) : 
				echo "<li>";
				echo '<a href="../Cart/show_products_by_categories.php?categoryID=' .  $item[0] . ' ">' . $item[1] .	'</a>';
                echo "</li>";
                endforeach; ?>
	</ul>			
        

</body>
</html>
