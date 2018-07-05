<!DOCTYPE html>
<html>
<head>
	<title>Danh sach</title>
	<meta charset="utf-8">
</head>
<body>
	<?php 
	include_once "ketnoi.php";

	$chuoi = "SELECT `MAKH`, `HO`, `TEN`, `DIACHI` FROM `khach_hang`";
	$danhsach = laydulieu($conn, $chuoi);
	?>

	<table border="1">
		<th>Ma khach hang</th>
		<th>Ho</th>
		<th>Ten</th>
		<th>Dia chi</th>
		<th>Sua</th>
		<th>Xoa</th>

		<?php while($row = mysqli_fetch_array($danhsach)) { ?>
			<tr>
				<td> <?php echo $row[0] ?> </td>
				<td> <?php echo $row[1] ?> </td>
				<td> <?php echo $row[2] ?> </td>
				<td> <?php echo $row[3] ?> </td>
				<td> <a href="suakhachhang.php?makh=<?php echo $row[0] ?>"> Sửa </a> </td>
				<td> <a href="xoakhachhang.php?makh=<?php echo $row[0] ?>" onclick="return xoa()"> Xóa </a> </td>
			</tr>

		<?php } ?>

	</table>
</body>

<script type="text/javascript">
	function xoa(){
		var hoi = confirm('Bạn có chắc muốn xóa không');
		if(!hoi){
			return false;
		}
	}
</script>
</html>