<?php
try {
// Create a variable with the data source
$datasource = 'mysql:host=localhost; dbname=my_guitar_shop2';

$id ='root';
$pwd='';

// create connection
$connect = new PDO ($datasource, $id, $pwd);

//echo 'you are now connected';
} catch (Exception $e) {

echo 'you are NOT  connected';
}



?>