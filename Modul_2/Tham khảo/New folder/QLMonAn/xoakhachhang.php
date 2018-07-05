<?php
include_once "ketnoi.php";


	$makh = $_GET['makh'];

	$chuoi = "DELETE FROM `khach_hang` WHERE `MAKH`='$makh' ";
	$kiemtrasua = dieuchinh($conn, $chuoi);
	if($kiemtrasua > 0){
		header("Location: http://localhost:8080/Onkynangnghe/danhsach.php");
	}
	else
		//them that bai
		echo "Thêm thất bại <a href='khachhang.php'> Trở về </a>";

?>
