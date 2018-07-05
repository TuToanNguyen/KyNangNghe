<?php
$conn = mysqli_connect("localhost","root","","qlmonan");

if(isset($_POST['INSER']))
{

	$ma = $_POST["ma"];
	$ten = $_POST['ten'];
	$gia = $_POST['gia'];
	$loai = $_POST['TenL'];

	$img = $_FILES['img']['tmp_name'];
	$open = fopen($img, 'r');

	$nd = fread($open, filesize($img));
	$h = mysqli_real_escape_string($conn, $nd); 

	$sqlkt = "SELECT mma from mon_an where mma = '$ma'";
	if(mysqli_num_rows(mysqli_query($conn, $sqlkt )) == 0)
	{
				//
		$sql = "INSERT INTO mon_an(mma, tenmon, hinh, gia, mal) values ('$ma', '$ten', '$h', '$gia', '$loai')";
		//echo "$sql";
		if(mysqli_query($conn, $sql) == true )
		{
			header('Location: http://localhost:9090/onthi/qlmonan2/menu.php');
			//echo"Thêm thanh cong";
		}
		else
			echo"Thêm that bai";
		}
}	
?>