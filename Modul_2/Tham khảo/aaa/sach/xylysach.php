<?php
	$conn = mysqli_connect("localhost","root","","quanlybansach");
	$maloai = $_POST['maloai'];

	$result = mysqli_query($conn, "SELECT * FROM sach WHERE MaL='$maloai'");


    $result1 = mysqli_query($conn, "SELECT * FROM nhaxb");
    $row1=mysqli_fetch_array($result1);

    $result2 = mysqli_query($conn, "SELECT * FROM tacgia");
    $row2=mysqli_fetch_array($result2);

    $result3 = mysqli_query($conn, "SELECT * FROM loaisach");
    $row3=mysqli_fetch_array($result3);

?>
<table border="1">
    <tr> 
        <td colspan="6" align="center">
         Danh muc sach thuoc loai 
         <?php echo"$maloai" ?>
        </td>
    </tr>
	<tr>
    	<td> Mã sách</td>
        <td> Tên sách</td>
        <td> Gia ban</td>
        <td> Nha xuat ban</td>
        <td> Tác giả</td>
        <td> Ten loại</td>
    </tr>
    <?php 
		while ($row=mysqli_fetch_array($result)){
	?>
    <tr>
    	<td><?php echo $row[0] ?></td>
        <td><?php echo $row[1] ?></td>
        <td><?php echo $row[2] ?></td>
        <td><?php echo $row1[1] ?></td>
        <td><?php echo $row2[1] ?></td>
        <td><?php echo $row3[1] ?></td>
    </tr>
    <?php } ?>
</table>