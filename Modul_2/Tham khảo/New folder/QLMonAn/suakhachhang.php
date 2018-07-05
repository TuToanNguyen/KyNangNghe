<?php
include_once "ketnoi.php";

$makh = $_GET['makh'];
$chuoi = "SELECT `MAKH`, `HO`, `TEN`, `DIACHI` FROM `khach_hang` WHERE MAKH = '$makh'";
$thucthi = laydulieu($conn, $chuoi);
$khach_hang = mysqli_fetch_array($thucthi);

?>
<!DOCTYPE html>
<html>
<head>
	<title>Khách hàng</title>
	<meta charset="utf-8">
</head>
<body>
	<form action="capnhat.php" method="POST">
		Mã khách hàng: <input type="text" name="makh" value="<?php echo $khach_hang[0] ?>" readonly> <br>
		Họ: <input type="text" name="ho" value="<?php echo $khach_hang[1] ?>"> <br>
		Tên: <input type="text" name="ten" value="<?php echo $khach_hang[2] ?>"> <br>
		Địa chỉ: <input type="text" name="diachi" value="<?php echo $khach_hang[3] ?>"> <br>

		<input type="submit" value="Sửa khách hàng" name="btsua">
		
	</form>
</body>
</html>