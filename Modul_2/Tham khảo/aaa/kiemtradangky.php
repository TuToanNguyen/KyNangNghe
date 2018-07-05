<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<title>Form đăng ký</title>
	<style type="text/css">
	*{
		padding: 0;
		margin: 0;
	}
	#bang{
		margin: 0 auto;
		border: 1px solid #212121;
		padding: 10px;
		margin-top: 15px;
	}
</style>
</head>
<body>
	<table width="400" id="bang">
		<tr>
			<td colspan="2"><div align="center"><strong>ĐĂNG KÝ</strong></div></td>
		</tr>
		<tr>
			<td width="146"><strong>Họ tên</strong></td>
			<td width="215"><input type="text" id="hoten" /><span id="loihoten"></span></td>
		</tr>
		<tr>
			<td width="146"><strong>Username</strong></td>
			<td width="215"><input type="text" id="tendangnhap" /><span id="loitendangnhap"></span></td>
		</tr>
		<tr>
			<td><strong>Password</strong></td>
			<td><input type="text" id="matkhau" /><span id="loimatkhau"></span></td>
		</tr>
		<tr>
			<td><strong>Giới tính</strong></td>
			<td><input type="checkbox" id='gtnam' name="gioitinh" onclick="ktgioitinh('nam')">Nam<input type="checkbox" id='gtnu' name="gioitinh" onclick="ktgioitinh('nu')">Nữ</td>
		</tr>
		<tr>
			<td><strong>Email</strong></td>
			<td><input type="text" id="email" /><span id="loiemail"></span></td>
		</tr>
		<tr>
			<td><strong>Phone</strong></td>
			<td><input type="text" id="phone" /><span id="loiphone"></span></td>
		</tr>
		<tr>
			<td colspan="2"><div align="center"><input type="submit" id="btdk" onclick="ktra()" name="btdk" value="Đăng ký"/>&ensp;<input type="button" id="btrs" value="Reset"/></div></td>
		</tr>
	</table>
</body>
<script type="text/javascript" charset="utf-8">
	
	

	function ktra()
	{
		var hoten = document.getElementById('hoten').value.trim();
		var username = document.getElementById('tendangnhap').value.trim();
		var pass = document.getElementById('matkhau').value.trim();
		var email = document.getElementById('email').value.trim();
		var sdt = document.getElementById('phone').value.trim();
		khoangtrang(hoten,'loihoten','họ tên');
		kiemtrakytu(username,'loitendangnhap','tên đăng nhập');
		kiemtraemail(email,'loiemail','email');
		kiemtraphone(sdt,'loiphone','phone');
	}

	function ktgioitinh(gt)
	{
		if(gt=='nam')
		{
			if(document.getElementById('gtnam').checked)
				document.getElementById('gtnu').checked=false;
		}
		if(gt=='nu')
		{
			if(document.getElementById('gtnu').checked)
				document.getElementById('gtnam').checked=false;
		}

	}
	function kiemtraphone(chuoi,loi,tenloi){

		var ktphone=0;
		if(chuoi ==" ")
		{
			document.getElementById(loi),innerHTML='Nhập sai '+tenloi;
		}
		for(var i=0;i<chuoi.length;i++)
		{

			if(!(chuoi[i]>='0'&&chuoi[i]<='9'))
			{
				document.getElementById(loi).innerHTML="Nhập sai "+tenloi;
				ktphone=1;

			}
		}
		if(ktphone==0)
		{

			document.getElementById(loi).innerHTML="";
		}
	}
	function khoangtrang(chuoi,thongbao,ten)
	{
		while (chuoi.search('  ')!=-1) {
			chuoi = chuoi.replace('  ',' ');
		}
		if(chuoi.search(' ')==-1)
		{
			document.getElementById(thongbao).innerHTML='Nhập sai ' + ten;
		}
		else{
			document.getElementById(thongbao).innerHTML='';
		}

	}

	function kiemtrakytu(chuoi,loi,tenloi)
	{

		if(chuoi.length == 0)
		{
			document.getElementById(loi).innerHTML= tenloi+' không được bỏ trống';
		}
		else
		{
			var kiemtra =0;
			for(var i=0;i<chuoi.length;i++)
			{
				if(!((chuoi[i]>='a' && chuoi[i]<='z')||(chuoi[i]>='A' && chuoi[i]<='Z')||(chuoi[i]>='0' && chuoi[i]<='9')))
				{
					document.getElementById(loi).innerHTML='Nhập sai '+tenloi;
					kiemtra = 1;
				}

			}
			if(kiemtra==0)
			{
				document.getElementById(loi).innerHTML='';
			}
		}

	}
	function kiemtraemail(chuoi,loi,tenloi)
	{
		if(chuoi.length == 0)
		{
			document.getElementById(loi).innerHTML= tenloi+' không được bỏ trống';
		}
		else
		{
			var kiemtra =0;
			for(var i=0;i<chuoi.length;i++)
			{
				if(!(chuoi[i]=='@' && chuoi[i]=='.'))
				{
					document.getElementById(loi).innerHTML='Nhập sai '+tenloi;
					kiemtra = 1;
				}

			}
			if(kiemtra==0)
			{
				document.getElementById(loi).innerHTML='';
			}
		}
	}	

</script>
</html>