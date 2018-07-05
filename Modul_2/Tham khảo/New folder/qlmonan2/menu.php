<?php
$conn = mysqli_connect("localhost","root","","qlmonan");

$sql = "SELECT * from loai_mon";
$rs = mysqli_query($conn, $sql);

?>
<table border="1">
	<tr>
		<td>DANNH SACH MON AN THEO LOAI</td>
	</tr>

	<?php
	while($row = mysqli_fetch_array($rs)){
	?>

	<tr>
		<td> CAC MON --- <?php echo $row['TENL']; ?></td>
	</tr>
	
	<?php
		$loai = $row['MAL'];
		$sql1 = "SELECT tenmon, hinh, gia from mon_an where mal = '$loai'";
		$rs1 = mysqli_query($conn, $sql1);
	?>

	<tr>
		<td>TEN MON</td>
		<td>GIA</td>
		<td>HINH MINH HOA</td>	
	</tr>

	<?php
		while($rows = mysqli_fetch_array($rs1)){
	?>

	<tr>
		<td> <?php echo $rows['tenmon'] ?> </td>
		<td> <?php echo $rows['gia'] ?> </td>
		
			<?php
			$img = base64_encode($rows['hinh']);

			echo "<td>  <img src= 'data:image/png;base64,$img' width='70px' heigth='70px' />  </td>" 
			?>
			
        </td>
	</tr>
	
	<?php } ?>
	<?php } ?>
	
	<tr>
		<td colspan="3" align="center"> 
			
			<a href = "themmon.php"> THEM MON </a>
		</td>
	</tr>

</table>