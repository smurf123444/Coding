 <?php
 //  show_product.php
 
 session_start();
 include '../connect.php';
 include ('functions.php');
 $productID = $_GET['productID'];
 
 // get all needed product data
  $product  = get_product_data($productID);
  echo "<br>";
  echo "<br>";

  //echo $product[0][4];
	$product_id = $product[0][0];
    $product_code=  $product[0][2];
    $name =  $product[0][3];
	$description =  $product[0][4];
	$price =  $product[0][5];
    $image_name = '../images/' . $product_code . '_m.png';

 
	
?>
<!DOCTYPE html>
<html>    
<head>
    <title>WEBSITE NAME</title>
    <link rel="stylesheet" type="text/css" href= "../main.css" />
</head>
<body>
	
<a href="view_cart.php">View Cart</a>
<?php
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
	
	<div id="left_column">
	    <h2><?php echo $name; ?></h2>
		<img src="<?php echo $image_name; ?>"/> 
    </div>
	 <div id="right_column">
        <p><b>List Price:</b>
        <?php echo '$' . $price; ?></p>
		<h2>Description</h2>
		<p > <?php echo  $description; ?> </p>
		<form action="add_to_cart.php" method ="get" >
		   <input type="hidden" name="productID" value ="<?php echo $product_id ; ?>" />
		   <b> Quantity: </b>&nbsp;
		    <input type="text" name="quantity" value ="1" size="2" />
			<input type="submit" value="Add to Cart" />
		</form>
     </div>
 

</body>
</html>
 
 