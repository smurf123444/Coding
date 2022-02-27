 <?php
 //  show_products_by_categories.php
 session_start();
  include '../connect.php';
 include 'functions.php';
 
$catid = $_GET['categoryID'];
$catName = get_category_name($catid); 					 //get_category_name function is in  functions.php
 
//Include the file that makes the connection to the desired database

    $query = 'SELECT * FROM products
              WHERE categoryID = :category_id
              ORDER BY productID';
    try {
        $statement = $connect->prepare($query);
        $statement->bindValue(':category_id', $catid);
        $statement->execute();
        $result = $statement->fetchAll();
        $statement->closeCursor();
        
    } catch (PDOException $e) {
        $error_message = $e->getMessage();
        display_db_error($error_message);
    }
	
	
?>
<!DOCTYPE html>
<html>    
<head>
    <title>Guitar Shop 2</title>
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
		<table>
		<tr> <h1>Guitar Shop 2 </h1> </tr>
		<h2>Items  by Selected Category </h2>
        <!--    
		-->
        <?php 	echo "Category: " . $catName .  "<br><br>";
				foreach ($result  as $item) : 
				echo "<tr>";
				 
                echo "<td>" . '<a href="show_product.php?productID=' .  $item[0] . ' ">' .  $item[3] . "</td>" . "<td>" .'  $' .  number_format($item[5],2) . "</td>";
				
				echo "</tr>";
                endforeach; 
               ?>
        </table>


        
</body>
</html>