<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" href="css.css"/>
	<title></title>
</head>
<script type="text/javascript">
	function hoa(x){
  switch(x){
    case 'hoa1' : {
  document.getElementById("h1").src="img/174265.jpg";
      break;
    }
    case 'hoa2' : {
  document.getElementById("h1").src="http://img.khoahoc.tv/photos/image/2016/02/24/Hoa-Jade-Vine.jpg";
      break;
    }
    case 'hoa3' : {
  document.getElementById("h1").src="http://img.khoahoc.tv/photos/image/2016/02/24/Hoa-mo-vet.jpg";
      break;
    }
  }
}

</script>
<body>
<body>
  <table border=1>
    <tr>
      <th colspan=2>10 LOẠI HOA ĐẸP NHẤT</th>
    </tr>
    <tr>
      <td onmousemove=(hoa('hoa1')) class="chon">Hoa Champion</td>
      <td rowspan=10><img style="width: 500px" src="img/174265.jpg" id="h1" /></td>
    </tr>
    <tr>
      <td onmousemove=(hoa('hoa2')) class="chon">Hoa Jade Vine (Hoa móng cọp)</td>
    </tr>
    <tr>
      <td onmousemove=(hoa('hoa3')) class="chon">Hoa mỏ vẹt</td>
    </tr>
   
  </table>
<body>
</body>
</html>