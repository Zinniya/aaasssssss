<?php 
	
	$hostname = "localhost";
	$username = "root";
	$password = "";
	$dbname = "todo";

	$conn = new mysqli($hostname, $username, $password, $dbname);

	/*var_dump($conn);*/

	if ($conn->connect_error) {
		die("Connection Unsuccessful: " . $conn->connect_error);
	}

	/*$sql = "INSERT INTO Users (firstname, lastname) VALUES ('MNO', 'GHI')";*/

	/*$sql = "UPDATE Users SET firstname = 'XYZ' WHERE id = 2";*/

	$sql = "DELETE FROM Users WHERE id = 2";

	if ($conn->query($sql) === TRUE) {
  		echo "New record created successfully";
	} else {
  		echo "Error: " . $sql . "<br>" . $conn->error;
	}

	echo "<hr><hr>";


	$sql = "INSERT INTO Users (id, firstname,lastname)
      VALUES ('20', 'Zinniya', 'Taffannum')";

      $query=mysqli_query($conn, $sql);

?>