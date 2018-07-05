#include<iostream>
#include<cstdlib>
#include<string.h>
#include <iomanip>
#include<math.h>
#include<conio.h>
using namespace std;
class ThueBaoDT{
      private:
              char tel[12];
              char hoten[25];
              char diachi[25];
              int sophut;
      public:
             ThueBaoDT(){
                         strcpy(tel,"");
                         tel[11] = '\0';
                         strcpy(hoten,"");
                         strcpy(diachi,"");
                         sophut = 0;
             }
             void Nhap();
             void HienThi(int n);
             friend char *GetTel(ThueBaoDT *a,int n,char *b);
             float TinhCuoc();
             friend void DoiCho(ThueBaoDT &a,ThueBaoDT &b);
             friend void XapXep(ThueBaoDT *p,int k);
};
//nhap danh sach
void ThueBaoDT::Nhap(){
     int i = 0,j = 0;
     cout<<"\n + Nhap ho ten: ";
     nhaphoten:
     cin.get();
     cin.getline(hoten,25);
     i = 0;
     while(hoten[i]!='\0'){
     if(hoten[0]==' '){
     cout<<" ---> Loi dau cach o dau \n + Nhap ho ten: ";
     cout<<"\n + Nhap ho ten: ";
     i = 0;
     goto nhaphoten;
     }
     if(int(hoten[i])<65&&hoten[i]!=' '||int(hoten[i])>90&&int(hoten[i])<97||int(hoten[i])>122){
           cout<<" ---> Loi ten chua ki tu dac biet \n + Nhap ho ten: ";
           goto nhaphoten;
     }
     if(hoten[i]==' ')j++;
     if(hoten[i+1]=='\0'&&j<2||hoten[i+1]=='\0'&&j>3){
              cout<<" ---> Thieu hoac co dau cach o cuoi ho ten \n + Nhap ho ten: ";
              j = 0;
              goto nhaphoten;
     }
              i++;
     } 
     cout<<" + Nhap dia chi: ";
     cin.getline(diachi,25);
     cout<<" + Nhap so dien thoai: ";
     nhaplaitel:
     cin.getline(tel,12);
     i = 0;
     while(tel[i]!='\0'){
                         if(tel[0]!='0'){
                         cout<<" ---> Loi khong co so 0 o dau \n + Nhap so dien thoai: ";
                         i = 0;
     goto nhaplaitel;
     }
     if(int(tel[i])<48||int(tel[i])>57){
                         cout<<" ---> Loi co ki tu khong phai so";
                         goto nhaplaitel;
     }
         i++;
      }
     if(strlen(tel)<9||strlen(tel)>11||strlen(tel)==10) {
                         cout<<" ---> Loi chua du hoac thua so \n + Nhap so dien thoai: ";
                         cin.get();
     goto nhaplaitel;
     }
     do{
             cout<<" + Nhap so phut trong thang: ";
             cin>>sophut;
             if(sophut<0){
             cout<<" ---> Loi so phut am\n";
             }
             }while(sophut<0);
}

//hien thi bang danh sach
void ThueBaoDT::HienThi(int n){
     float x = TinhCuoc();
     for(int i=1;i<=3;i++){
          if(i%2==0){
                  cout<<"\n";
                  cout<<"\nThue bao thu: "<<n<<endl;
                  cout<<"---------------"<<endl;
                  cout<<"\n\tTen: "<<hoten<<"\n\tDia chi: "<<diachi<<"\n\tSDT: "<<tel<<"\n\tSo phut: "<<sophut<<"\n\tTien: "<<x*1000;
}
else{
cout<<"\n\t";
}
}
cout<<"\n\t";
for(int j=1;j<=50;j++) cout<<'-';
}
//tim so dien thoai cua nguoi co ten la abc
char *GetTel(ThueBaoDT *a,int n,char *b){
for(int i=0;i<n;i++){
if(strcmp(a[i].hoten,b)==0){
char *p;
p = a[i].tel;
return p;
break;
}
}
}
//tinh cuoc
       float ThueBaoDT::TinhCuoc(){
             float cuoc;
             return cuoc = 20 + sophut*0.2;
             
}
//doi cho
void DoiCho(ThueBaoDT &a,ThueBaoDT &b){
         ThueBaoDT c;
             c = a;
             a = b;
             b = c;
}
//xap xep danh sach theo ho va ten
void XapXep(ThueBaoDT *p,int k){
     int i,j,m,n,e;
     char ten[25] = " ",s[25] = " ";
     double a = 0,b = 0;
     for(i=0;i<k-1;i++){
     strcpy(ten,p[i].hoten);
     m = 0;
     while(ten[m]!='\0') m = m + 1;
     m = m - 1;
     while(ten[m]!=' ') m = m - 1;
     m = m + 1;
     a = 0;
     e = 0;
     while(ten[m]!='\0'){
     a = a + double(int(ten[m]))/pow(10,e);
     e++;
     m++;
}
     for(j=i+1;j<k;j++){
            strcpy(ten,p[j].hoten);
            n = 0;
            while(ten[n]!='\0') n = n + 1;
                   n = n - 1;
                   while(ten[n]!=' ') n = n - 1;
                           n++;
                           e = 0;
                           b = 0;
                           while(ten[n]!='\0'){
                                   b = b + double(int(ten[n]))/pow(10,e);
                                         e++;
                                         n++;
}
       if(a>b){
            DoiCho(p[i],p[j]);
            a = b;
       }
       else{
             if(a==b){
             strcpy(ten,p[i].hoten);
             strcpy(s,p[j].hoten);
             if(s[0]<ten[0]) DoiCho(p[i],p[j]);
             }
         }
      }
   }
}

//ham chinh
main(){
       int n;
       cout<<"\n - Nhap so nguoi thue bao dien thoai: ";
       cin>>n;
       ThueBaoDT a[n];
       int i;
           cout<<" - Nhap danh sach:\n";
       for(i=0;i<n;i++){
           cout<<"\n => Nguoi thu "<<i+1<<":";
       a[i].Nhap();
       }

       cout<<"\n - Ban muon tim so dien thoai cua nguoi co ten: ";
       char ten[25] = "";
       cin.get();
       cin.getline(ten,25);
       cout<<" + So dien thoai cua nguoi do la: ";
       char *p;
       p = GetTel(a,n,ten);
       cout<<p<<"\n\n";
       XapXep(a,n);

       cout<<"\n\t\t\tDANH SACH THUE BAO \n";
       for(i=0;i<n;i++) a[i].HienThi(i+1);
             float tong = 0;
             for(i=0;i<n;i++){
                    tong = tong + a[i].TinhCuoc();
                    }
             cout<<"\n\t - Tong so tien thu duoc la: "<<tong*1000<<" VND";
             cout<<"\n\n\t\t";
getch();
}
