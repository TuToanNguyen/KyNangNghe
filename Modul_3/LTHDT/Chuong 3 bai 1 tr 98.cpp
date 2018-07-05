#include<cstdlib>
#include<iostream>
#include<conio.h>
using namespace std;
class Phanso{
      private:
              float tu,mau;
      public:
             Phanso(){
                      tu = 1;
                      mau = 1;         
             }
             Phanso(float x, float y){
                     tu=x;
                     mau=y;              
             }
             Phanso(Phanso const &a){
                     tu = a.tu;
                     mau = a.mau;              
             }
             void Nhap(){
                  cout<<"\n\tNhap tu: "; cin>>tu;
                  cout<<"\tNhap mau: "; cin>>mau;
                  }
             void In(){
                  cout<<tu<<"/"<<mau;
                  }
             Phanso operator+(Phanso a){
                    Phanso temp;
                    temp.tu=a.mau*tu+a.tu*mau;
                    temp.mau=mau*a.mau;
                    return temp;
                    }
             Phanso operator-(Phanso a){
                    Phanso temp;
                    temp.tu=(a.mau*tu)-(mau*a.tu);
                    temp.mau=mau*a.mau;
                    return temp;
                    }
             Phanso operator*(Phanso a){
                    Phanso temp;
                    temp.tu=tu*a.tu;
                    temp.mau=mau*a.mau;
                    return temp;
                    }
             Phanso operator/(Phanso a){
                    Phanso temp;
                    Phanso g;
                    g.tu=a.mau;
                    g.mau=a.tu;
                    temp.tu=g.tu*tu;
                    temp.mau=g.mau*mau;
                    return temp;
                    }
             friend ostream & operator<<(ostream &o,Phanso &b){
                     o<<b.tu;
                     o<<"/";
                     o<<b.mau;
                     return o;
                     }
             friend istream & operator>>(istream &i, Phanso &b){
                    cout<<"\n\tNhap tu: ";i>>b.tu;
                    cout<<"\tNhap mau: ";i>>b.mau;        
                    }
};
main()
{
      cout<<"\t\t=======CAC PHEP TINH TRE NPHAN SO======\n\n";
      cout<<"\n\n===========CONG HAI PHAN SO==========\n\n";
      Phanso A;
      cout<<"+++ Nhap phan so A: ";
      A.Nhap();
      cout<<"\n+++ Nhap phan so B: ";
      Phanso B;
      B.Nhap();
      cout<<"\n\tA + B = ";
      Phanso C=A+B;
      C.In();
      
      cout<<"\n\n===========NHAN HAI PHAN SO==========\n\n";
      Phanso C1;
      cout<<"+++ Nhap phan so C: ";
      C1.Nhap();
      cout<<"\n+++ Nhap phan so D: ";
      Phanso D1;
      D1.Nhap();
      cout<<"\n\tC * B = ";
      Phanso E=C1*D1;
      E.In();
      
      cout<<"\n\n===========TRU HAI PHAN SO==========\n\n";
      Phanso E1;
      cout<<"+++ Nhap phan so E: ";
      E1.Nhap();
      cout<<"\n+++ Nhap phan so F: ";
      Phanso F1;
      F1.Nhap();
      cout<<"\n\tE -  F = ";
      Phanso G1=E1-F1;
      G1.In();
      
      cout<<"\n\n===========CHIA HAI PHAN SO==========\n\n";
      Phanso G2;
      cout<<"+++ Nhap phan so G: ";
      cin>>G2;
      cout<<"\n+++ Nhap phan so H: ";
      Phanso H;
      cin>>H;
      cout<<"\n\tG / H = ";
      Phanso K=G2/H;
      cout<<K;
      getch();      
}
