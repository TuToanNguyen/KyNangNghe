 <?php 

	include("ketnoi.php");
	
	$maloai = $_POST["ml"];

		$str = "SELECT * from loaisach where maloai = $maloai";
		$rs = mysqli_query($conn, $str);

		if(mysqli_num_rows($rs) > 0){

			echo "da co";
		}else
			echo "ko co"; 

?> 