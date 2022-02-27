<?php

/**
*	author: Igor Ilic
*	email: mr.gigiliIII@gmail.com
*	website: http://github.com/gigili/Private-messaging-system
* 	version: 1.0
*	licence: MIT	
**/
session_start();
require_once "../config.php";

/* Attempt to connect to MySQL database */

class Private_messaging_system{
	
	public function __construct()
	{
		//$serv = mysqli_connect(server,user,password) or die ("Mysql was unable to connect to a database using provided information!");
	//	mysqli_select_db($serv,database) or die ("Mysql was unable to select " . database . " database!");
	}
	/**
	*	$message = message that will be validate for security purposes
	**/
	private function validate_message($message){
		$return = trim($message); // trims all the white space at the beginning and the end of string
		$return = filter_var($message, FILTER_SANITIZE_STRING); // strips tags
		$return = filter_var($message, FILTER_SANITIZE_FULL_SPECIAL_CHARS); // Equivalent to calling htmlspecialchars()
		return $return;
	} // END _validate_message

	/**
	*	$TO = USER_ID for which the message is meant
	* 	$MESSAGE = message that is sent to a user
	*	$SUBJECT = subject of a message
	*	$RESPOND = ID of conversation to which this message is a part of
	**/
	public function send_message($to, $message, $subject, $respond = 0){
    // Validate username
		///$serv = mysqli_connect(server,user,password) or die ("Mysql was unable to connect to a database using provided information!");
		$from = $_SESSION['username']; // ID of a user sending a message

		$message = $this->validate_message($message); // validate message to see if it safe, to be passed to the database
		if($respond == 0){
			//$sql = "INSERT INTO users (username, password, btcAddress, privKey) VALUES (?, ?, ?, ?)";
			$sql = "INSERT INTO messages (user_to, user_from, subject, message) VALUES ($to,  $from,  $subject ,$message)";
		}else{
			$sql = "INSERT INTO messages (user_to, useer_from, subject, message, respond) VALUES (" . $to . ", " . $from . ", '" . $subject . "', '" . $message . "'," . $respond . ")";
		}
		$link = mysqli_connect(DB_SERVER, DB_USERNAME, DB_PASSWORD, DB_NAME);
		if($stmt = mysqli_prepare($link, $sql)){
            // Bind variables to the prepared statement as parameters
           // mysqli_stmt_bind_param($stmt, "ssss", $param_username, $param_password, $minikey, $priv_key);
           // echo "TITS";
            // Set parameters
           // $param_username = $username;
           // $param_password = password_hash($password, PASSWORD_DEFAULT); // Creates a password hash
            
            // Attempt to execute the prepared statement
            if(mysqli_stmt_execute($stmt)){
                // Redirect to login page
                header("location: login.php");
            } else{
                echo "Oops! Something went wrong. Please try again later.";
            }

            // Close statement
            mysqli_stmt_close($stmt);
        }
		else {
			echo "TITS";
		}
/* 		if($this->validate_message($message)){
			$stmt = mysqli_prepare($serv, $query);
			mysqli_query($serv,$query);
	
		
			$link = mysqli_connect(server, user, password, database);
			mysqli_stmt_execute($stmt);
			echo '<h1> TITS</h1>';
			mysqli_stmt_close($stmt);
			// uncomment this function out if you want to email a user of a new message
			//$this->_email_user_of_new_message($to,$from,$subject);
			return TRUE;
		}else{
			return FALSE;
		} */
	} // END send_message
	
	public function get_number_of_unread_messages(){
		$id = $_SESSION['user_id'];
		$query = "SELECT COUNT(opened) AS unread FROM " . TBL_MESSAGES . " WHERE user_to = '" . $id . "' AND respond = '0'";
		return mysql_query($query);
	} // END get_number_of_unread_messages

	public function get_all_messages(){
		$role = "sender_delete";
		$id = $_SESSION['user_id'];
		$query = mysql_query("SELECT user_to FROM " . TBL_MESSAGES . " WHERE id = '" . $message_id . "'");
		while($data = mysql_fetch_object($query)){
			if($data->user_to != $id){
				$role = "receiver_delete";
			}			
		}
		$query = "SELECT * FROM " . TBL_MESSAGES . " WHERE user_to = '" . $id . "' OR user_from = '" . $id . "' AND respond = 0 AND " . $role . " != 'n'";
		return mysql_query($query);
	} // END get_all_messages

	public function get_message($message_id){
		$role = "sender_delete";
		$id = $_SESSION['user_id'];
		$query = mysql_query("SELECT user_to FROM " . TBL_MESSAGES . " WHERE id = '" . $message_id . "'");
		while($data = mysql_fetch_object($query)){
			if($data->user_to != $id){
				$role = "receiver_delete";
			}			
		}
		$query = mysql_query("SELECT * FROM " . TBL_MESSAGES . " WHERE id = '" . $message_id . "' AND (user_to = '" . $id . "' OR user_from = '" . $id . "') OR respond = '" . $message_id . "' AND " . $role . " != 'n'");
		return $query;
	} // END get_message

	public function delete_message($message_id){
		$role = "sender_delete";
		$id = $_SESSION['user_id'];
		$query = mysql_query("SELECT user_to FROM " . TBL_MESSAGES . " WHERE id = '" . $message_id . "' OR respond = '" . $message_id . "'");
		while($data = mysql_fetch_object($query)){
			if($data->user_to != $id){
				$role = "receiver_delete";
			}			
		}

		$query1 = mysql_query("UPDATE " . TBL_MESSAGES . " SET " . $role . " = 'y' WHERE id = '" . $message_id . "'");
		$this->_check_for_deleted_messages();
	} // END delete_message

	public function delete_conversation($conversation_id){
		$role = "sender_delete";
		$id = $_SESSION['user_id'];
		$query = mysql_query("SELECT user_to FROM " . TBL_MESSAGES . " WHERE id = '" . $message_id . "'");
		while($data = mysql_fetch_object($query)){
			if($data->user_to != $id){
				$role = "receiver_delete";
			}			
		}
		mysql_query("UPDATE " . TBL_MESSAGES . " SET " . $role . " = 'y' WHERE id = '" . $conversation_id . "'");
	}

	private function _check_for_deleted_messages(){
		mysql_query("DELETE FROM " . TBL_MESSAGES . " WHERE sender_delete = 'y' AND receiver_delete 'y'"); // removes messages from DB if both sender and receiver have deleted it.
	} // END _check_for_deleted_messages

	/**
	*	$to = ID of a user who will receive message
	*	$from = ID of a user who is sending message
	*	$subject = subject of a message
	**/
	private function _email_user_of_new_message($to,$from,$subject){
		$r = mysql_fetch_object(mysql_query("SELECT first_name,last_name,email FROM " . TBL_USERS . " WHERE id = '" . $to . "'"));
		$u = mysql_fetch_object(mysql_query("SELECT first_name,last_name FROM " . TBL_USERS . " WHERE id = '" . $from . "'"));
		$name = $r->first_name . " " . $r->last_name;
		$uname = $u->first_name . " " . $u->last_name;
		$to_email = $r->email;
		//This message is optional, you can put what ever you want
		$body = "Dear " . $name . ",\n";
		$body .= "you have received a new message on our system.\n\n";
		$body .= "<table border='1'><tr>";
		$body .= "<th>From: </th>";
		$body .= "<th>Subject:</th>";
		$body .= "</tr><tr>";
		$body .= "<td>&nbsp;" . $uname . "&nbsp;</td>";
		$body .= "<td>&nbsp;" . $subject . "&nbsp;</td>";
		$body .= "</tr></table>\n";
		$body .= "Best regards,\n";
		$body .= "MyWebSite.com team";		
		
		mail($to_email,MY_WEBSITE_EMAIL,"New message: " . $subject,$body);
	} // END _email_user_of_new_message


} // END class

?>



<?php

//session_start();
//phpinfo();
// Include config file

require_once "../config.php";

//$bitcoinECDSA->setPrivateKey($priv);
//print "<br>Minikey: $minikey\n";

//print "<br>Privkey: $priv\n";
// Define variables and initialize with empty values

 
// Processing form data when form is submitted
if($_SERVER["REQUEST_METHOD"] == "POST"){
        // Prepare an insert statement
       // $sql = "INSERT INTO users (username, password, btcAddress, privKey) VALUES (?, ?, ?, ?)";
	   if(empty(trim($_POST["to"]))){
        $username_err = "Please enter a valid username.";
    } elseif(!preg_match('/^[a-zA-Z0-9_]+$/', trim($_POST["to"]))){
        $username_err = "Username can only contain letters, numbers, and underscores.";
    } else{
        // Prepare a select statement
        $sql = "SELECT id FROM users WHERE username = ?";
        if($stmt = mysqli_prepare($link, $sql)){
            // Bind variables to the prepared statement as parameters
            mysqli_stmt_bind_param($stmt, "s", $param_to);
            // Set parameters
       
	
            // Attempt to execute the prepared statement
            if(mysqli_stmt_execute($stmt)){
                /* store result */
                $test = mysqli_stmt_store_result($stmt);
				$param_to = trim($test);
                if(mysqli_stmt_num_rows($stmt) == 1){
					echo $test;
                    $param_to = $test;
					//make function to grab recipient user ID
					//$param_to = $_SESSION["id"];
			
			
                } else{
					$username_err = "This username does not exist.";
					$username =  trim($_POST["to"]);
                }
            } else{
                echo "Oops! Something went wrong. Please try again later.";
            }
            // Close statement
            mysqli_stmt_close($stmt);
        }
    }
	$param_from = trim($_SESSION["id"]);
	$param_subj = trim($_POST["subject"]);
	$param_msg = trim($_POST["msg"]);
	   if(empty(trim($_POST["subject"]))){
        $subject_err = "Please enter a subject.";     
    } elseif(strlen(trim($_POST["subject"])) < 6){
        $subject_err = "subject must have atleast 6 characters.";
    } else{
        $subject = trim($_POST["subject"]);
    }
	$sql = "INSERT INTO messages (user_to, user_from, subject, message) VALUES (?, ?, ?, ?)";
        if($stmt = mysqli_prepare($link, $sql)){
            // Bind variables to the prepared statement as parameters
            mysqli_stmt_bind_param($stmt, "ssss", $param_to, $param_from, $param_subj, $param_msg);
            // Attempt to execute the prepared statement
            if(mysqli_stmt_execute($stmt)){
                // Redirect to login page
               header("location: login.php");
            } else{
                echo "Oops! Something went wrong. Please try again later.";
            }
            // Close statement
            mysqli_stmt_close($stmt);
			  // Close connection
        }
		mysqli_close($link);
}
?>
 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Sign Up</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
    <style>
        body{ font: 14px sans-serif; }
        .wrapper{ width: 360px; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Message</h2>
        <p>Please fill this form to Send a message.</p>
        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <div class="form-group">
                <label>To:</label>
                <input type="text" name="to" class="form-control <?php echo (!empty($username_err)) ? 'is-invalid' : ''; ?>" value="<?php echo $to = ''; ?>">
                <span class="invalid-feedback"><?php echo $username_err; ?></span>
            </div>    
            <div class="form-group">
                <label>Subject:</label>
                <input type="text" name="subject" class="form-control <?php echo (!empty($subject_err)) ? 'is-invalid' : ''; ?>" value="<?php echo $subject = ''; ?>">
                <span class="invalid-feedback"><?php echo $subject_err; ?></span>
            </div>
            <div class="form-group">
                <label>Message:</label>
                <input type="text" name="msg" style="height:200px;font-size:14pt;" class="form-control <?php echo (!empty($confirm_password_err)) ? 'is-invalid' : ''; ?>" value="<?php echo $message = ''; ?>">
                <span class="invalid-feedback"><?php echo $confirm_subject_err; ?></span>
            </div>
            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Submit">
                <input type="reset" class="btn btn-secondary ml-2" value="Reset">
            </div>
        </form>
		<?php
	
//	$var = new Private_messaging_system();
// $var->send_message("smurrf123444", "Sex", "from: who ever - need help", 0);

	
	?> 
    </div>    
</body>
</html>