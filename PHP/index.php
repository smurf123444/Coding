<!DOCTYPE html>
<html>
<head>
	<title>Example Title</title>
</head>
<body>
	<center>
		<h1>Welcome to my site!</h1>
		<form action="registration.php" method="post">
			<table>
				<thead>
					<tr>
						<th></th>
						<th>
							<h2>Register</h2>
						</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td>User Name:</td>
						<td><input type="text" name="username"></td>
					</tr>
					<tr>
						<td>Email Address:</td>
						<td><input type="text" name="email"></td>
					</tr>
					<tr>
						<td>Expansion:</td>
						<td><input type="text" name="expansion"></td>
					</tr>
					<tr>
						<td>Password:</td>
						<td><input type="password" name="sha_pass_hash"></td>
					</tr>
					<tr>
						<td>Password again:</td>
						<td><input type="password" name="sha_pass_hash2"></td>
					</tr>
					<tr>
						<td></td>
						<td><input type="submit" value="Register"></td>
					</tr>
				</tbody>
			</table>
		</form>
	</center>
</body>
</html>
