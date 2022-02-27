<?php
 session_start();
 include '../connect.php';
 include 'functions.php';

// Create an empty cart if it does not exist 
if (!isset($_SESSION['cart'])) {
	$_SESSION['cart']=array();
}
// Add an item to the cart

	//$productID = $_GET['productID'];
	
	$quantity = 1;
	
	if ($quantity > 0) { 
	//	$_SESSION['cart'][$productID]= round($quantity,0);
				
		//create an array of current items in the cart
		$items = array();
		

?>
<!DOCTYPE html>
<html>    
<head>
    <title>BOOK SHOP</title>
    <link rel="stylesheet" type="text/css" href= "../main.css" />
</head>
<body>
	
	 
		<h1>Your Cart </h1> 
		
		<?php
		$grand_total = 0;
		
		echo '<table border = "1">  <tr> <th>  Product Name </th>  <th>  Price </th> <th> Qty</th> <th> Total</th> <th> Update</th> <th> Delete</th></tr> ';
		
		foreach ($_SESSION['cart']as $productID => $quantity) {
			
			// get book data
			$product =get_product_data($productID);
			
			$items[$productID]['productCode'] =$product[0][2];			
			$items[$productID]['productName'] =$product[0][3];
			$items[$productID]['listPrice'] = $product[0][5]; 
			 
			$items[$productID]['quantity']=$quantity;
			$image_name = 'images/' . $product[0][2] . '.jpg';
			
			$product_total = $product[0][5] * $quantity;
			$grand_total +=$product_total;
			
			echo  '<tr>'; 
			echo  '<td>' . $items[$productID]['productName'] . '</td>';
			echo  '<td>' . $items[$productID]['listPrice'] . '</td> ';
			echo  '<td>' . $items[$productID]['quantity'] . '</td>';
			echo  '<td>' .  sprintf('$%.2f',$product_total) . '</td>';
			echo '<td> <form action="update_quantity.php">
			<label for="qty">Qty:</label><br>
			<input type="text" id="qty" name="qty">
			<input type="hidden" id="productID" name="productID" value="'.$productID.'">
			<button type="submit">Update</button>
			<br>
	
		  </form> </td>';
		  echo '<td> <form action="removeItemFromCart.php">
			<label for="rm_item"></label><br>
			<input type="hidden" id="productID" name="productID" value="'.$productID.'">
			<input type="submit" id="rm_item" name="rm_item" value="Remove"><br>
			
		  </form> </td>';
		 
			echo  '</tr>';

			
			
		}
	} 	
		echo '<tr> <td>&nbsp</td>     <td>&nbsp</td>  <td>TOTAL</td> <td>' . sprintf('$%.2f',$grand_total) . '</td> ';
		echo '</table>';
	
	
		echo '<td> <form action="reset_cart.php">
		<label for="reset_cart"></label><br>
		<button type="submit">Reset Cart</button><br>
	
		
	  </form> </td>';
	  if($_SESSION["privaleges"] === 0){
		echo'<a href="../Pages/welcome.php">Home</a>';
	}
	if($_SESSION["privaleges"] === 1){
		echo'<a href="../Pages/vendorShop.php">Home</a>';
	}
	if($_SESSION["privaleges"] === 2){
		echo'<a href="../Pages/moderator.php">Home</a>';
	}
		?>
		

</body>
</html>
 
 