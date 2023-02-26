<?php
 session_start();
 include 'connect.php';
 include 'functions.php';

// Create an empty cart if it does not exist 
if (!isset($_SESSION['cart'])) {
	$_SESSION['cart']=array();
}
// Add an item to the cart

	$productID = $_GET['productID'];
	
	$quantity = $_GET['quantity'];
	
	if ($quantity > 0) { 
		$_SESSION['cart'][$productID]= round($quantity,0);
				
		//create an array of current items in the cart
		$items = array();
		

?>
<!DOCTYPE html>
<html>    
<head>
    <title>BOOK SHOP</title>
    <link rel="stylesheet" type="text/css" href= "main.css" />
</head>
<body>
	
	 
		<h1>Your Cart </h1> 
		
		<?php
		$grand_total = 0;
		echo print_r($_SESSION);
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
		 
			echo  '</tr>';
			 
			
		}
	} 	
		echo '<tr> <td>&nbsp</td>     <td>&nbsp</td>  <td>TOTAL</td> <td>' . sprintf('$%.2f',$grand_total) . '</td> ';
		echo '</table>';	
		?>
		

</body>
</html>
 
 