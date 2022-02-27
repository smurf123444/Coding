<?php 



?>

<!DOCTYPE html>
<html>    
<head>
    <title>VENDOR</title>
    <link rel="stylesheet" type="text/css" href= "main.css" />
</head>
<body>
	<h1 class = "right" >VENDOR </h1>
	<a href="view_cart.php">View Cart</a>
	<h2>Categories </h2>
        <!-- Show each of the categories found using a foreach loop. the $categories  variable is an array now
			 Here we use indexes to point to the location of the desired column on each record
		-->
	<ul>

        <?php 	foreach ($result  as $item) : 
				echo "<li>";
				echo '<a href="show_products_by_categories.php?categoryID=' .  $item[0] . ' ">' . $item[1] .	'</a>';
                echo "</li>";
                endforeach; ?>
				<h1>VENDOR DETAILS FOR SELLING</h1>
	</ul>			
        

</body>
</html>
