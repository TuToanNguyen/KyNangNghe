#include<iostream>
#include<cstdlib>
using namespace std;
class Ps{
	private:
		float x, y;
	public:
		Ps(){
			x=6;
			y=2;
		}
		void In(){
			cout<<"X = "<<x;
			cout<<"\nY = "<<y;
		}
		Ps operator+(Ps &a){
			x=x+a.x;
			y=y+a.y;
			return *this;
		}
};
main()
{
	Ps a;
	a.In();
	Ps b,c;
	c=a+b;
	cout<<"\n";
	c.In();
}
