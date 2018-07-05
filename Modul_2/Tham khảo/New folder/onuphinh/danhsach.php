<?php
include("db.php");
$sql = "SELECT * FROM `hinhanh`";
$dulieu = laydulieu($conn,$sql);
?>
<!DOCTYPE html>
<html>
<head>
	<title>Danh sách</title>
	<meta charset="utf-8">
</head>
<body>
	<table border="1px">
		<thead>
			<tr>
				<th>ID</th>
				<th>Tên Hình</th>
				<th>Link Hình</th>
				<th>Thao tác</th>
			</tr>
		</thead>
		<tbody>
			<?php
			while ($row=mysqli_fetch_array($dulieu)) {
				?>
				<tr>
					<th><?php echo $row[0]?></th>
					<th><img src="images/<?php echo $row[1]?>" alt="" width="100" height="100"></th>
					<th><img src="images/<?php echo $row[3]?>" alt="" width="100" height="100"></th>
					<th><a href="suahinh.php?id=<?php echo $row[0]?>" title="">Sửa</a> 
					<a href="xuly.php?id=<?php echo $row[0]?>" title="" onclick="return xoa()">Xóa</a></th>
				</tr>
				<?php
			}
			?>
		</tbody>
	</table>
</body>
</html>
<script type="text/javascript">
	function xoa()
	{
		if(confirm('Bạn có chắc chắn xóa hay không?'))
		{
			return true;
		}
		else{
			return false;
		}
	}
</script>
