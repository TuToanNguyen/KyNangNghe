<?php
	$conn = mysqli_connect("localhost","root","","quanlybansach");
	$maloai = $_POST['maloai'];
	$result = mysqli_query($conn, "SELECT * FROM sach WHERE maloai='$maloai'");
?>
<table>
	<tr>
    	<td> Mã sách</td>
        <td> Tên sách</td>
        <td> Tác giả</td>
        <td> Mã loại</td>
    </tr>
    <?php 
		while ($row=mysqli_fetch_array($result)){
	?>
    <tr>
    	<td><?php echo $row[0] ?></td>
        <td><?php echo $row[1] ?></td>
        <td><?php echo $row[2] ?></td>
        <td><?php echo $row[3] ?></td>
    </tr>
    <?php  } ?>
</table>