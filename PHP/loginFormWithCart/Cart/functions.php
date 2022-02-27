<?php
// functions.php

function get_categories() {
  global $connect;
  $query = "SELECT * FROM categories";
	$statement = $connect ->prepare($query);
	$statement -> execute();
	$result = $statement->fetchall();
	$statement-> closeCursor();
	 	
	return $result;
	
}



function get_category_name($catid) {
	global $connect;
	$query = 'SELECT * FROM categories WHERE categoryID = :category_id';
	try {
		$statement = $connect->prepare($query);
		$statement->bindValue(':category_id', $catid);
		$statement->execute();
		$result = $statement->fetchAll();
		$statement->closeCursor();
		$name = $result[0][1];
		 
		return $name;
	} catch (PDOException $e) {
        $error_message = $e->getMessage();
        display_db_error($error_message);
    }
}


// Get item data
function get_product_data($productID) {
	global $connect;
	 $query = 'SELECT * FROM products    WHERE productID = :product_id';
    try {
        $statement = $connect->prepare($query);
        $statement->bindValue(':product_id', $productID);
        $statement->execute();
        $result = $statement->fetchAll();
        $statement->closeCursor();
		
		
		return $result;
    } catch (PDOException $e) {
        $error_message = $e->getMessage();
        display_db_error($error_message);
    }
}








?>