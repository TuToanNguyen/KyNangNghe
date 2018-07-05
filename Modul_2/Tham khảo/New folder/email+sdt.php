<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
  Nhập địa chỉ mail: <input type="email" id="myEmail">
  <button onclick="ktmail()">Kiểm tra</button>
  <br><br>
    Nhập số điện thoại <input type="text" id="sdt">
  <button onclick="ktsdt()">Kiểm tra</button>
</body>
<script type="text/javascript">
	function ktmail() {
    var x = document.getElementById("myEmail").value;
    var chuoi = /[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,4}$/;
    if(chuoi.test(x)){
    	alert('đúng');
    }else{alert('sai')}
}
function ktsdt() {
    var x = document.getElementById("sdt").value;
    var chuoi = /^\+?\d{1,3}?[- .]?\(?(?:\d{2,3})\)?[- .]?\d\d\d[- .]?\d\d\d\d$/;
    if(chuoi.test(x)){
    	alert('đúng');
    }else{alert('sai')}
}
</script>
</html>