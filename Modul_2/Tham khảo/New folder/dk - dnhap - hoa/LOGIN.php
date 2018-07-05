<?php  
include("ketnoi.php");

$tendn = $_POST["ten"];
$matkhau = $_POST["mk"];

    try
	{
		if(!$tendn || !$matkhau)
		{
	    echo "Vui lòng nhập đầy đủ thông tin";
   		}
   		else
		{
			$sql = "SELECT * from nguoidung where tendn = '$tendn' and matkhau = '$matkhau' ";
			//cach 1
			// $result=mysqli_query($conn, $sql);
			// $count=mysqli_num_rows($result);
			// // nếu tài khoản trùng khớp thì sẽ trả về giá trị 1 cho biến $count
			// if($count==1)

			//cach2
			 if(mysqli_num_rows(mysqli_query($conn, $sql)) == 1 )			{
				//echo "dang nhap thanh cong";
				header('Location: http://www.vforum.vn/');
			}
			else
			{
				echo "error! dang nhap that bai";
			}
		}
	}

	catch(Exception $e)
	{
		echo " " .$e;
	}

	finally
	{
		mysqli_close($conn);
	}



?>