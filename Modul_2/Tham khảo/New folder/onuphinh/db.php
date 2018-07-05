<?php
$conn = mysqli_connect('localhost','root','','hinhanh') or die ('kết nối thất bại');
mysqli_set_charset($conn,'utf8');
function laydulieu($conn,$sql)
{
	$thucthi = mysqli_query($conn,$sql);
	return $thucthi;
}
function capnhat($conn,$sql)
{
	$thucthi = mysqli_query($conn,$sql);
	$dem = mysqli_affected_rows($conn);
	return $dem;
}


