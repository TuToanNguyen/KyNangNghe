<?php
include_once "ketnoi.php";

if(isset($_POST['btthem']))
{
	$makh = $_POST['makh'];
	$ho = $_POST['ho'];
	$ten = $_POST['ten'];
	$diachi = $_POST['diachi'];

	$chuoi = "INSERT INTO `khach_hang`(`MAKH`, `HO`, `TEN`, `DIACHI`) VALUES ('$makh','$ho','$ten','$diachi')";
	$kiemtrathem = dieuchinh($conn, $chuoi);
	if($kiemtrathem > 0){
		header("Location: http://localhost:8080/Onkynangnghe/danhsach.php");
	}
	else
		//them that bai
		echo "Thêm thất bại <a href='khachhang.php'> Trở về </a>";
}


if(isset($_POST['btsua']))
{
	$makh = $_POST['makh'];
	$ho = $_POST['ho'];
	$ten = $_POST['ten'];
	$diachi = $_POST['diachi'];

	$chuoi = "UPDATE `khach_hang` SET `HO`='$ho',`TEN`='$ten',`DIACHI`='$diachi' WHERE  `MAKH`='$makh' ";
	$kiemtrasua = dieuchinh($conn, $chuoi);
	if($kiemtrasua > 0){
		header("Location: http://localhost:8080/Onkynangnghe/danhsach.php");
	}
	else
		//them that bai
		echo "Thêm thất bại <a href='khachhang.php'> Trở về </a>";
}

if(isset($_GET['btxoa']))
{
	$makh = $_GET['makh'];

	$chuoi = "DELETE FROM `khach_hang` WHERE `MAKH`='$makh' ";
	$kiemtrasua = dieuchinh($conn, $chuoi);
	if($kiemtrasua > 0){
		header("Location: http://localhost:8080/Onkynangnghe/danhsach.php");
	}
	else
		//them that bai
		echo "Thêm thất bại <a href='khachhang.php'> Trở về </a>";
}

?>