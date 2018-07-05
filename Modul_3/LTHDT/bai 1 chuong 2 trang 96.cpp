#include <cstdlib>
#include <math.h>
#include <iostream>
using namespace std;
class Diem{
	private:
		float x, y;
	public:
		Diem(){
			x=0;
			y=0;
		}
		Diem(int i, int j){
			x=i;
			y=j;
			}
		void NhapDiem(){
			cout<<"Nhap toa do x: ";cin>>x;
			cout<<"Nhap toa do y: ";cin>>y;
		}
		void InDiem(){
			cout<<"("<<x<<","<<y<<")";
		}
		int GiaTriX(){
			return x;
		}
		int GiaTriY(){
			return y;
		}
		float KhoangCach(Diem b){
			Diem c;
			c.x = b.x - x;
			c.y = b.y - y;
			return (sqrt(pow(c.x,2.0)+pow(c.y,2.0)));
		}
};
main()
{
	cout<<"Toa do diem D:" << endl;
	Diem d(2,4);
	d.InDiem();
	Diem a;
	a.NhapDiem();
	a.InDiem();
	cout<<"\n";
	Diem b;
	b.NhapDiem();
	b.InDiem();
	cout<<"\n";
	cout<<"Khoang cach 2 diem a, b la: "<<a.KhoangCach(b);
	cout<<"\n";
	system("PAUSE");
}
