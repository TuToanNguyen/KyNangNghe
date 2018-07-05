<?php
$conn = @mysqli_connect('localhost','root','','qlmonan') or die ('ket noi that bai');
mysqli_set_charset($conn, "utf8");

//dung chho select
function laydulieu($conn, $chuoi){
	$thucthi = mysqli_query($conn, $chuoi); // thuc thi sql
	return $thucthi;                       // tra ve ket qua
}

//dung trong insert, update, delete
function dieuchinh($conn, $chuoi){
	$thucthi = mysqli_query($conn, $chuoi); // thuc thi sql
	$kiemtra = mysqli_affected_rows($conn);  //dem so dong da thuc thi
	return $kiemtra;                       // tra ve ket qua
}


// $them = dieuchinh($conn, "insert into loai_mon(MAL,TENL) values ('12', 'mới thêm')");
// if($them > 0)
// 	echo "Thêm thành công";
// else
// 	echo "Thêm thất bại";


// $dulieu = laydulieu($conn, "select *from loai_mon");
// while($row = mysqli_fetch_array($dulieu))
// {
// 	echo $row['1'];
// }
?>