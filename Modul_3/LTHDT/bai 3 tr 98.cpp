#include<cstdlib>
#include<iostream>
using namespace std;
class Phanso{
	private:
		float tu, mau;
	public:
		void Nhap(){
			cout<<"Nhap tu: "; cin>>tu;
			cout<<"Nhap mau: "; cin>> mau;
		}
		void In(){
			cout<<tu<<"/"<<mau;
		}
		friend	Phanso & operator+(Phanso a, Phanso b){
			Phanso c;
			c.tu = (b.tu*a.mau) + (a.tu*b.mau);
			c.mau = b.mau*a.mau;
			return c;
		}
		friend ostream & operator<<(ostream &o, Phanso &a){
			o<<a.tu;
			cout<<"/";
			o<<a.mau;
		}
		friend istream & operator>>(istream &i, Phanso &a){
			cout<<"Nhap tu: ";
			i>>a.tu;
			cout<<"Nhap mau: ";
			i>>a.mau;
		}
};
main()
{
	Phanso a,b,c;
	cin>>a;
	cin>>b;
	c=a+b;
	cout<<c;
	
	cout<<"\n";
	system("PAUSE");
}
