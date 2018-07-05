<?php 
include('ketnoi.php');

$tendn = $_POST["ten"];
$matkhau = $_POST["mk"];
$nhaplai = $_POST["mk2"];
$hoten = $_POST["hoten"];

    try
    {
    	if(!$tendn || !$matkhau || !$nhaplai)
		{
		    echo "Vui lòng nhập đầy đủ thông tin";
	    }
	    $sql = "SELECT * FROM nguoidung WHERE 'tendn'='$tendn' ";
    	if(mysqli_num_rows(mysqli_query($conn, $sql)) > 0)
    	{
       		echo "Tên đăng nhập này đã có người dùng. Vui lòng chọn tên đăng nhập khác";
    	}
	    else
		{
			$str = "INSERT into nguoidung values ('$tendn','$hoten', '$matkhau')";
			if(mysqli_query($conn, $str))
			{
				header('Location: http://localhost:8080/tutoan/login.html');
			}
			else
				echo "dang ky that bai";
		}
	}
		catch(Exception $e)
			{echo " " .$e;}	
?>