<!DOCTYPE html>
<html>
<head>
	<title>themmonan</title>
	<meta charset="utf-8">
</head>

<script>

	function KT()
	{
	var ma = document.getElementById("ma").value;
	var ten = document.getElementById("ten").value;
	var gia = document.getElementById("gia").value;

	if(ma == "")
	{
		document.getElementById("thongbao1").innerHTML = "Ma khong bo trong!";
	}
	else
		document.getElementById("thongbao1").innerHTML = "";

	if(ten == "")
	{
		document.getElementById("thongbao2").innerHTML = "Ten khong bo trong!";
	}
	else
		document.getElementById("thongbao2").innerHTML = "";

	if(gia < 0)
	{
		document.getElementById("thongbao3").innerHTML = "Gia khong la so am!";
	}
	else
		document.getElementById("thongbao3").innerHTML = "";
	}

</script>

<body>
	
	<form action="them.php" method="post" enctype="multipart/form-data">
		THÊM MÓN ĂN <br>
		<br>
		MÃ MÓN ĂN <br>
		<input type="text" name="ma" id="ma" onblur="KT()">  <p id="thongbao1"></p>
		TÊN MÓN ĂN <br>
		<input type="text" name="ten" id="ten" onblur="KT()"> <p id="thongbao2"></p>
		CHỌN HÌNH <br>
		<input type="file" name="img" id="img"><br>
		<br>
		ĐƠN GIÁ <br>
		<input type="text" name="gia" id="gia" onblur="KT()"> <p id="thongbao3"></p>
		


		LOẠI MÓN ĂN <br>
		
		<?php
		$conn = mysqli_connect("localhost","root","","qlmonan");

		$result = mysqli_query($conn, "SELECT * FROM loai_mon ");
		if(mysqli_num_rows($result) !=0)
		{
			echo "Chọn loại món <select class='TenL' name='TenL'>";

			while($row=mysqli_fetch_array($result))
			{
				echo "<option value=$row[0]> $row[1] </option>";
			}
			echo "</select>";
		}
		?>
		<br>
		<br>
		<input type="submit" name="INSER" value="INSERT" onblur="KT()">

	</form>

</body>

</html>
