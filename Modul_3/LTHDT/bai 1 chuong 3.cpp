#include<cstdlib>
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class PhanSo
{
      private:
              float tu,mau;
      public:
             friend ostream & operator <<(ostream &o,PhanSo b);
             friend istream & operator >>(istream &i,PhanSo &b);
};
ostream & operator<<(ostream &o,PhanSo b)
{
    cout<<b.tu<<"/"<<b.mau<<endl;
}
istream & operator >>(istream &i,PhanSo &b)
{
    cout<<" tu so :  ";
    i>>b.tu;
    cout<<" mau so :   ";
    i>>b.mau;
    return i;
}
   
   
   
int main ()
{
    cout<<"tao phan so a \n";
    PhanSo a;
    cin>>a;
    cout<<"tao phan so b \n";
    PhanSo b;
    cin>>b;
    cout<<"in 2 phan so  \n";
    cout<< " a=  " <<a;
    cout<< " b=  "<<b;
    getch();
}
    
