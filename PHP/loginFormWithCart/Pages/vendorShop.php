<?php
try {
// Include the file that makes the connection to the desired database
include '../connect.php';
 
session_start();
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
echo '<br>Address: ' . htmlspecialchars($_SESSION["btcAddress"]);
echo '<br>Address Balance: ' . getBalance(htmlspecialchars($_SESSION["btcAddress"]));
?> 

<!DOCTYPE html>
<html>    
<head>
    <title>VENDOR</title>
    <link rel="stylesheet" type="text/css" href= "../main.css" />
	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
</head>
<body>
	<h1 class = "right" >VENDOR </h1>
	<a href="messageCenter.php">Message Center</a>
	<a href="../Cart/view_cart.php">View Cart</a>

        <!-- Show each of the categories found using a foreach loop. the $categories  variable is an array now
			 Here we use indexes to point to the location of the desired column on each record
		-->
		<h1 class="my-5">Hi, <b><?php echo htmlspecialchars($_SESSION["username"]); ?></b>. Welcome to our site.</h1>
   
   <p>
	   <a href="reset-password.php" class="btn btn-warning">Reset Your Password</a>
	   <a href="logout.php" class="btn btn-danger ml-3">Sign Out of Your Account</a>
   </p>
   <h2>Categories </h2>
	<ul>

        <?php 	foreach ($result  as $item) : 
				echo "<li>";
				echo '<a href="../Cart/show_products_by_categories.php?categoryID=' .  $item[0] . ' ">' . $item[1] .	'</a>';
                echo "</li>";
                endforeach; ?>
				<h1>VENDOR DETAILS FOR SELLING</h1>
	</ul>			
        

</body>
</html>
