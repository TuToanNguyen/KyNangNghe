<?php
include("db.php");
$id =$_GET['id'];
$sql = "SELECT * FROM `hinhanh` WHERE IDHINH=$id";
$dulieu = laydulieu($conn,$sql);
$row = mysqli_fetch_array($dulieu);
?>
<!DOCTYPE html>
<html>
<head>
	<title>Hình ảnh</title>
	<meta charset="utf-8">
</head>
<body>
	<form action="xulyupdate.php" method="POST" enctype="multipart/form-data">
		<img src="images/<?php echo $row[1]?>" id="linkhinh"  width="40" height="40">
		Chọn hình <input type="file" name="hinh" id="idhinh" value="images/<?php echo $row[1]?>">&ensp;
		<input type="submit" name="up" value="Úp hình">
	</form>
</body>
</html>
<script type="text/javascript">
</script>