<?php
include_once("db.php");
$id = $_GET["id"];
$sql ="DELETE  FROM hinhanh WHERE IDHINH=$id";
echo $sql;
$kq = capnhat($conn,$sql);
if($kq>0)
{
    echo ("<script>alert('xóa thành công')</script>");
    header("location:danhsach.php");
}
else
{
    echo ("<script>alert('xóa thất bại')</script>");
}
?>