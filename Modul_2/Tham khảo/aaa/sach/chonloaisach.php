<?php  


<form action="chonloaisach.php" method="post">
include("ketnoi.php");	
try
{
	$result = mysqli_query($conn, "SELECT * from loaisach");
	if(mysqli_num_row($result) != 0)
	{
		echo "Chon loai sach <select name ='TenL'> ";
		$row = mysqli_fetch_array($result);
		while(!empty($row))
		{
			echo "<option> $row[1] </option>";
			$row = mysqli_fetch_array($result);
		}
	}
	else
		echo "chua co";
		echo "</select>";
}
catch(exception $e)
{
	echo "loi table";
}
<input type="button" name="GOI">

</form>



?>