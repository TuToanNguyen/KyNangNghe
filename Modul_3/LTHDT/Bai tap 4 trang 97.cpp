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
             PhanSo(){
                  tu=1;
                  mau=1;         
             }
             PhanSo(float a,float b){
                  tu=a;
                  mau=b;
             }
             PhanSo(const PhanSo &a){
                 tu=a.tu;
                 mau=a.mau;             
             }
             void Nhap();
             void In();
             void NghichDao();
             float Giatri();
             int SoSanh(PhanSo b);
             PhanSo Cong(PhanSo B);
             PhanSo Tru(PhanSo d);
             PhanSo Nhan(PhanSo e);
             PhanSo Chia(PhanSo f); 
             PhanSo operator + (PhanSo b);
             PhanSo operator - (PhanSo b);
             PhanSo operator * (PhanSo b);
             PhanSo operator / (PhanSo b);
             friend ostream & operator <<(ostream &o,PhanSo &b);
             friend istream & operator <<(istream &i,PhanSo &b);
                         
};

void PhanSo::Nhap(){
     do{
     cout<<"\nNhap vao tu so: ";cin>>tu;
     cout<<"Nhap vao mau so: ";cin>>mau;
     }while(mau==0);
}



void PhanSo::In(){
     if(tu==mau) cout<<"\n-----> Phan so la: "<<1<<endl;
     else
     if(tu==0&&mau!=0)cout<<"\n-----> Phan so la: "<<0<<endl;
     else
     if(mau==1) cout<<"\n-----> Phan so la: "<<tu<<endl;
     else
     if(mau==-1) cout<<"\n-----> Phan so la: "<<-1*tu<<endl;
     else
     if(tu>0&&mau>0) cout<<"\n-----> Phan so la: "<<tu<<"/"<<mau<<endl;
     else
     if(mau<0) cout<<"\n-----> Phan so la: "<<-1*tu<<"/"<<-1*mau<<endl;
     else cout<<"\n-----> Phan so la: "<<tu<<"/"<<mau<<endl;
}




void PhanSo::NghichDao(){
     tu=tu+mau;
     mau=tu-mau;
     tu=tu-mau;
}



float PhanSo::Giatri(){
      return tu/mau;      
}



int PhanSo::SoSanh(PhanSo b){
    if(Giatri()==b.Giatri()) return 0;
    if(Giatri()>b.Giatri()) return 1;
    if(Giatri()<b.Giatri()) return -1;
}



PhanSo PhanSo::Cong(PhanSo B){
    PhanSo c;
    c.mau=mau*B.mau;
    c.tu=mau*B.tu+B.mau*tu;
    return c;     
}


PhanSo PhanSo::Tru(PhanSo d){
    PhanSo c;
    c.mau=mau*d.mau;
    c.tu=tu*d.mau- mau*d.tu;
    return c;     
}
PhanSo PhanSo::Nhan(PhanSo e){
    PhanSo c;
    c.mau=mau*e.mau;
    c.tu=e.tu*tu;
    return c;     
}



PhanSo PhanSo::Chia(PhanSo f){
    PhanSo c;
    f.NghichDao();
    c.mau=mau*f.mau;
    c.tu=f.tu*tu;
    return c;     
}


// qua tai toan tu +:
       
PhanSo PhanSo :: operator + ( PhanSo b)
{
    PhanSo d;
    d.mau=mau*b.mau;
    d.tu=mau*b.tu+b.mau*tu;
    return d;   
}  

PhanSo PhanSo::operator - (PhanSo b){
    PhanSo c;
    c.mau=mau*b.mau;
    c.tu=tu*b.mau- mau*b.tu;
    return c;     
}
PhanSo PhanSo::operator * (PhanSo b){
    PhanSo c;
    c.mau=mau*b.mau;
    c.tu=b.tu*tu;
    return c;     
}
PhanSo PhanSo::operator / (PhanSo b){
    PhanSo c;
    b.NghichDao();
    c.mau=mau*b.mau;
    c.tu=b.tu*tu;
    return c;     
}
ostream & operator <<(ostream &o,PhanSo &b)
{
    os<<b.tu<<(b.mau>=0? '+':'-')<<"j*"<<fabs(b.mau)<<endl;
    return os;
}
istream & operator <<(istream &i,PhanSo &b)
{
    cout<<" tu so :  ";
    is>>b.tu;
    cout<<" mau so :   ";
    is>>b.mau;
    return is;
}



main()
{
      PhanSo A;
      A.Nhap();
      A.In();
      PhanSo b(3,5),f;
      // toan tu +
      f= A + b;
      cout<<"\n---->Phan so sau khi cong la:        "<<endl;
      f.In();
      
      // toan tu -
      f= A-b;
      cout<<"=====Phan so sau khi tru la:         "<<endl;
      f.In();
      
      // toan tu *
      f=A*b;
      cout<<"======Phan so sau khi nhan la:       "<<endl;
      f.In();
      
      // toan tu /
      f=A/b;
      cout<<"=====Phan so sau khi chia la:       "<<endl;
      f.In();
      
      getch();
      
}


























