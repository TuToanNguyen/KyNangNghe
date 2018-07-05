<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Untitled Document</title>
</head>
<script type="text/javascript" src="http://code.jquery.com/jquery-2.0.3.min.js"></script>
<body>
<?php
$conn = mysqli_connect("localhost","root","","quanlybansach");
$result = mysqli_query($conn, "SELECT * FROM loaisach ");
if(mysqli_num_rows($result) !=0)
{
	echo "Chọn loại sách <select class='TenL'>";

	while($row=mysqli_fetch_array($result))
	{
		echo "<option value=$row[0]> $row[1] </option>";
	}
	echo "</select>";
}
?>
<input type="button" value="Gui" class="gui"/>
<div class="khung">

</div>
</body>
<script>
	$(document).ready(function(){
		$('.gui').click(function(){
			var maloai = $('.TenL').val();
			$.post('xylysach.php',{maloai:maloai},function(data){
				$('.khung').html(data);
			})
		})
	});
</script>
</html>