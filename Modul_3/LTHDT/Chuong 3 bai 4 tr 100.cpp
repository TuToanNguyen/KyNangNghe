#include<cstdlib>
#include<iostream>
#include<conio.h>
using namespace std;
class Sophuc{
      
      private:
              float thuc,ao;
      public:
             Sophuc(){
                      thuc=1;
                      ao=1;         
             }
             Sophuc(float t,float a){
                      thuc=t;
                      ao=a;
             }
             Sophuc(Sophuc const &a){
                      thuc = a.thuc;
                      ao = a.ao;              
             }
             void Nhap(){
                  cout<<"\tNhap phan thuc: "; cin>>thuc;
                  cout<<"\tNhap phan ao: "; cin>>ao;     
             }
             void In(){
                  cout<<"\t"<<thuc<<" + "<<ao<<"i";     
             }
             Sophuc operator+(Sophuc a){
                    Sophuc temp;
                    temp.thuc = a.thuc+thuc;
                    temp.ao = a.ao+ao;
                    return temp;
             }
             Sophuc operator-(Sophuc a){
                    Sophuc temp;
                    temp.thuc=thuc-a.thuc;
                    temp.ao=ao-a.ao;
                    return temp;
             }
             Sophuc operator*(Sophuc a){
                    Sophuc temp;                    
                    temp.thuc=thuc*a.thuc + (-1)*ao*a.ao;
                    temp.ao=thuc*a.ao + ao*a.thuc;
                    return temp;   
             }
             friend ostream & operator<<(ostream &o, Sophuc &a){
                    o<<a.thuc;
                    cout<<" + ";
                    o<<a.ao;
                    o<<"i";     
             }
             friend ostream & operator>>(istream &i,Sophuc &a){
                    cout<<"\tNhap phan thuc: ";i>>a.thuc;
                    cout<<"\tNhap phan ao: ";i>>a.ao;       
             }
};
main()
{
      Sophuc a;
      cin>>a;
      Sophuc b;
      cin>>b;
      cout<<" 2 so phuc vua tao la:    "<<endl;
      cout<<"a=   "<<a<<endl;
      cout<<"b=   "<<b;
      Sophuc c=a*b;
      cout<<"\n\tSo phuc A * B la: ";
      cout<<c;
      getch();      
}
