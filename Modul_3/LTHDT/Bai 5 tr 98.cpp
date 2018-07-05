#include<cstdlib>
#include<iostream>
using namespace std;
class ThueBaoDT{
	private:
		char Sdt[20];
		char* Hoten;
		char* Diachi;
		int Sophut;
	public:
		~ThueBaoDT(){
			delete(Hoten);
			delete(Diachi);
		}
		void NhapTB(){
			cout<<"Nhap so dien thoai: ";
			cin.ignore();
			cin.getline(Sdt,20);
			cout<<"Nhap ho ten: ";
			Hoten = new char [50];
			cin.getline(Hoten,50);
			cout<<"Nhap dia chi: ";
			Diachi = new char [50];
			cin.getline(Diachi,50);
			cout<<"So phut goi: "; cin>>Sophut;
		}
		void InTB(){
			cout<<"So thue bao: "<<Sdt;
			cout<<"\nHo ten: "<<Hoten;
			cout<<"\nDia chi: "<<Diachi;
			cout<<"\nCo so phut goi: "<<Sophut;
			cout<<"\nCo tong so tien cuoc: "<<Tinhcuoc();
		}
		char* LayHoTen(){
			char *tam;
			tam = new char [50];
			strcpy(tam, Hoten);
			return tam;
		}
		long Tinhcuoc(){
			int t = Sophut;
			return (t*200 + 20000);
		}
		char* Layso(){
			char *t;
			t = new char [20];
			strcpy(t,Sdt);
			return t;
		}	
};
main()
{
	ThueBaoDT a[50];
	int n;
	long Tong=0;
	do{
		cout<<"Nhap danh sach n so thue bao: ";
		cin>>n;
	}while(n<=0||n>=50);
	for(int i=1;i<=n;i++){
		cout<<"\n===== NHAP THUE BAO THU "<<i<<" =====\n\n";
		a[i].NhapTB();
	}
	for(int i=1;i<=n;i++){
		cout<<"\n===== IN THUE BAO THU "<<i<<" =====\n\n";
		a[i].InTB();
		Tong = Tong + a[i].Tinhcuoc();
	}
	cout<<"\n\nTong tien cuoc goi la: "<<Tong;
	
	char* Ten;
	cout<<"\nNhap ten nguoi can tim: ";
	cin.ignore();
	Ten = new char [50];
	cin.getline(Ten,50);
	cout<<"\nKet qua: ";
	int i;
	for(i=1; i<=n; i++){
		if(strcmp(Ten,a[i].LayHoTen())==0) cout<<a[i].Layso();
		else
		if(i==n && strcmp(Ten,a[i].LayHoTen())!=0) cout<<"Khong ton tai ten nguoi nay!";
	}
	cout<<"\n\n=====Danh sach thue bao co sap xep=====\n\n";
	
	
	
	cout<<"\n";
	system("PAUSE");
}
