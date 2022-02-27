<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "my_guitar_shop1";
//session_start();
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
$sql = "SELECT * FROM messages WHERE user_to = '" . $_SESSION["username"] . "'";
$result = $conn->query($sql);
// sql to create table
/* $sql = "CREATE TABLE MyGuests (
    id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    firstname VARCHAR(30) NOT NULL,
    lastname VARCHAR(30) NOT NULL,
    email VARCHAR(50),
    reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
    )";
 */

if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
      echo "id: " . $row["id"]. " - subject: " . $row["subject"]. " " .  " - Message: " . $row["message"]. "<br>";
    }
  } else {
    echo "0 results";
  }
$conn->close();
//https://www.w3schools.com/php/php_mysql_select.asp
?>
