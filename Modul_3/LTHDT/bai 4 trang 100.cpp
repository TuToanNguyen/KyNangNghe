#include<cstdlib>
#include<iostream>
using namespace std;
class Sophuc 
{
      private:
              float thuc, ao;
      public:
             Sophuc()
             {
                     thuc = 2;
                     ao = 3;
             }
             
             Sophuc(float a, float b)
             {
                     thuc = a;
                     ao = b;
             }
             
             Sophuc(const Sophuc &sp)
             {
                     thuc=sp.thuc;
                     ao=sp.ao;
             }
             
             void Nhap();
             void In();
             Sophuc operator + (Sophuc b);
             Sophuc operator - (Sophuc b);
             Sophuc operator * (Sophuc b);
             friend ostream & operator <<(ostream &o,Sophuc b);
             friend istream & operator >>(istream &i,Sophuc &b);
};

void Sophuc:: Nhap()
{
     cout<<" nhap phan thuc:   ";
     cin>>thuc;
     cout<<" nhap phan ao:   ";
     cin>>ao;
}
void Sophuc:: In()
{
     cout<<" ta co so phuc:     ";
     cout<<thuc<<" + "<<ao<<"i"<<endl;
     cout<<endl;
}
Sophuc Sophuc:: operator + (Sophuc b)
{
     Sophuc c;
     c.thuc = thuc + b.thuc;
     c.ao = ao + b.ao;
     return c;
}
Sophuc Sophuc:: operator - (Sophuc b)
{
     Sophuc c;
     c.thuc = thuc - b.thuc;
     c.ao = ao - b.ao;
     return c;
}
Sophuc Sophuc:: operator * (Sophuc b)
{
     Sophuc c;
     c.thuc = (thuc*b.thuc) - (ao*b.ao);
     c.ao = thuc*b.ao+ao*b.thuc;
     return c;
}
ostream & operator<<(ostream &o,Sophuc b)
{
        cout<<b.thuc<<" + "<<b.ao<<"i"<<endl;}
istream & operator >>(istream &i,Sophuc &b)
{
        cout<<"phan thuc:   ";
        i>>b.thuc;
        cout<<"phan ao:    ";
        i>>b.ao;
        return i;
}
main()
{
     /* Sophuc a;
      a.Nhap();
      a.In();      
      cout<<endl;
      
      Sophuc b(4,5),c;
      c= a+ b;
      cout<<" so phuc sau khi cong     ";
      c.In();
      c=a*b;
      cout<<"so phuc sau khi nhan:     ";
      c.In();*/
      cout<<"tao so phuc a    "<<endl;
      Sophuc a;
      cin>>a;
      cout<<"tao so phuc b    "<<endl;
      Sophuc b;
      cin>>b;
      cout<<" 2 so phuc vua tao la:    "<<endl;
      cout<<"a=   "<<a <<endl;
      cout<<"b=   "<<b;
      
      
      system("pause");
      }























