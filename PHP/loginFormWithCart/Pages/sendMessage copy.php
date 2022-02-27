

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
                    
                    $param_to = trim($_POST["to"]);
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
                if( $_SESSION["privaleges"] === 1)
                {
                    header("location: vendorShop.php");
                } 
                else if( $_SESSION["privaleges"] === 2)
                {
                    header("location: moderator.php");
                }
                else if( $_SESSION["privaleges"] === 3)
                {
                    header("location: admin.php");
                }
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