#include <cstdlib>
#include <iostream>
using namespace std;
class Clock{
	private:
		int h, m, s;
	public:
		Clock(){
			h = 00;
			m = 00;
			s = 00;
		}
		Clock(int h1, int m1, int s1){
			h = h1;
			m = m1;
			s = s1;
		}
		void NhapGio(){
			cout<<"Nhap gio: "; cin>>h;
			cout<<"Nhap phut: "; cin>>m;
			cout<<"Nhap giay: "; cin>>s;
		}
		void InGio(){
			cout<<"( "<<h<<" : "<<m<<" : "<<s<<" )";
		}
		void LamTron(){
			if(s>=35){
				s=0;
				m++;	
			}
			if(m>=56){
				m=0;
				h++;
			}
		}
};
main()
{
	Clock a;
	a.NhapGio();
	a.InGio();
	
	cout<<"\n";
	system("PAUSE");
}
