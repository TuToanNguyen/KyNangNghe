#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;
class Nguoi{
	private:
		char Hoten[50];
		int Namsinh;
	public:
		Nguoi(){
			strcpy(Hoten,"Ngo Thanh Ly");
			Namsinh = 1996;
		}
		Nguoi(char Hoten1[40], int Namsinh1){
			strcpy(Hoten,Hoten1);
			Namsinh = Namsinh1;
		}
		void Nhapnguoi(){
			cout<<"Nhap ho ten: ";
			cin.ignore();
			cin.getline(Hoten,50);
			cout<<"Sinh nam: ";
			cin>>Namsinh;
		}
		void Innguoi(){
			cout<<"Ho ten: "<<Hoten;
			cout<<"\nCo nam sinh: "<<Namsinh;
		}
};
class Monhoc{
	private:
		char Tenmh[50];
		int Sotiet;
	public:
		Monhoc(){
			strcpy(Tenmh,"Toan");
			Sotiet = 3;
		}
		Monhoc(char Tenmh1[40], int Sotiet1){
			strcpy(Tenmh,Tenmh1);
			Sotiet = Sotiet1;
		}
		void Nhapmh(){
			cout<<"Nhap ten mon hoc: ";
			cin.getline(Tenmh,40);
			cout<<"So tiet: ";
			cin>>Sotiet;
			cin.ignore();
		}
		void Inmh(){
			cout<<"\nTen mon hoc: "<<Tenmh;
			cout<<"\nCo so tiet la: "<<Sotiet;
		}
};
class Giaovien : Nguoi{
	private:
		char Monct[50];
		Monhoc Daymon;
	public:
		Giaovien():Nguoi(){
			strcpy(Monct,"Toan Ly Hoa");
		}
		void Nhapgv(){
			Nhapnguoi();
			cout<<"\nBo mon cong tac: ";
			cin.getline(Monct,40);
			cin.ignore();
			Daymon.Nhapmh();
		}
		void Ingv(){
			Innguoi();
			cout<<"\nCong tac bo mon: "<<Monct;
			Daymon.Inmh();
		}
};
main()
{
	Giaovien a[20];
	int n, i;
	do{
		cout<<"Nhap danh sach giao vien: ";
		cin>>n;
	} while(n<=0||n>=20);
	for(i=1;i<=n;i++){
		cout<<"Nhap giao vien thu "<<i<<" :\n";
		a[i].Nhapgv();
	}
	for(i=1;i<=n;i++){
		cout<<"\nIn giao vien thu "<<i<<" :\n";
		a[i].Ingv();
	}
	cout<<endl;
	system("PAUSE");
}
