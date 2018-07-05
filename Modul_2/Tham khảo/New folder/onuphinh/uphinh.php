<?php
include("db.php");
$file = $_FILES['hinh'];
$tenhinh = $file['name'];
if($file['error']==1)
{
	echo "up thanh cong"; die();
}
if(move_uploaded_file($file['tmp_name'],'images/'.$file['name']))
{
	$sql ="INSERT INTO `hinhanh`(`TENHINH`,`LINKHINH`) VALUES ('$tenhinh','$tenhinh')";
	$kiemtra = capnhat($conn,$sql);
	if($kiemtra>0)
	{
		echo "up thanh cong";
		?>
		<img src="images/<?php echo $tenhinh?>" alt="" width="100" height="100">
		<a href="danhsach.php" title="">Danh sách</a>
		<?php
	}
	
}else
{
	echo "up khong thanh cong";
}

?>