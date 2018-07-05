<?php 

	include("ketnoi.php");
	
	$maloai = $_POST["ml"];
	$tenloai = $_POST["tl"];
	try{
		$strloai = "INSERT into loaisach values ('".$maloai."', '".$tenloai."')";
		if(mysqli_query($conn, $strloai))
			echo "thanh cong";
		else
			echo "that bai";
	}
	catch(Exception $e)
	{
		echo " ".$e;
	}
	finally
	{
		mysqli_close($conn);
	}

?>