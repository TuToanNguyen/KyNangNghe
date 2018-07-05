#include<cstdlib>
#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
      private:
              int Ngay,Thang,Nam;
      public:
             Date(){
                    Ngay=1;
                    Thang=1;
                    Nam=1;
             }
             Date(int Ngay1, int Thang1,int Nam1){
                      Ngay=Ngay1;
                      Thang=Thang1;
                      Nam=Nam1;
             }
             Date(const Date &a){
                        Ngay=a.Ngay;
                        Thang=a.Thang;
                        Nam=a.Nam;
             }
             void Nhap(){
                  cout<<"Nhap ngay:\t";cin>>Ngay;
                  cout<<"Nhap thang:\t";cin>>Thang;
                  cout<<"Nhap nam:\t";cin>>Nam;
             }
             void Xuat(){
                  cout<<"\t"<<Ngay<<"/"<<Thang<<"/"<<Nam;     
             }
     //xet ngay hop le
     int Hople(){ 
     if(Ngay>31||Thang>13||Ngay<=0||Thang<=0)
         return 0; 
     else return 1; 
     }
    //Tinh ngay + 1
    void cong(){ 
    if(Hople()==1){
    Ngay = Ngay + 1; 
    int k,a[4] = {4,6,9,11}; 
    k = 1; 
    while(Ngay>28&&k==1){ 
        k = 0; 
        for(int i=0;i<4;i++) if(Thang==a[i]){ 
            k++; 
            break; 
        } 
        if(k==1){ 
            if(Ngay>30){ 
               Ngay = Ngay - 30; 
               Thang = Thang + 1; 
            } 
            else k = 0; 
        } 
        else{ 
           if(Thang==2){ 
              if(Nam%4==0&&Nam%100!=0||Nam%400==0){ 
                    if(Ngay>29){ 
                       Ngay = Ngay - 29; 
                       Thang = Thang + 1; 
                       k = 1; 
                    } 
                    else k = 0; 
              } 
              else{ 
                 if(Ngay>28){ 
                       Ngay = Ngay -28; 
                       Thang = Thang + 1; 
                       k = 1; 
                 } 
                 else k = 0; 
              } 
           } 
           else{ 
              if(Ngay>31){ 
                    Ngay = Ngay - 31; 
                    Thang = Thang + 1; 
                    k = 1; 
                    if(Thang>12){ 
                       Thang = Thang - 12; 
                       Nam = Nam + 1; 
                    } 
              } 
              else k = 0; 
           } 
        } 
    } 
    
      cout<<"\n\t1 ngay sau la ngay: "; 
      }
       else cout<<"Khong thuc hien duoc do nhap ngay thang sai";
      }
 
    //Ngay cong 1
    void Cong(int n){ 
    if(Hople()==1){
    Ngay = Ngay + n; 
    int k,a[4] = {4,6,9,11}; 
    k = 1; 
    while(Ngay>28&&k==1){ 
        k = 0; 
        for(int i=0;i<4;i++) if(Thang==a[i]){ 
            k++; 
            break; 
        } 
        if(k==1){ 
            if(Ngay>30){ 
               Ngay = Ngay - 30; 
               Thang = Thang + 1; 
            } 
            else k = 0; 
        } 
        else{ 
           if(Thang==2){ 
              if(Nam%4==0&&Nam%100!=0||Nam%400==0){ 
                    if(Ngay>29){ 
                       Ngay = Ngay - 29; 
                       Thang = Thang + 1; 
                       k = 1; 
                    } 
                    else k = 0; 
              } 
              else{ 
                 if(Ngay>28){ 
                       Ngay = Ngay -28; 
                       Thang = Thang + 1; 
                       k = 1; 
                 } 
                 else k = 0; 
              } 
           } 
           else{ 
              if(Ngay>31){ 
                    Ngay = Ngay - 31; 
                    Thang = Thang + 1; 
                    k = 1; 
                    if(Thang>12){ 
                       Thang = Thang - 12; 
                       Nam = Nam + 1; 
                    } 
              } 
              else k = 0; 
           } 
        } 
    } 
    if(n==1)cout<<"\nNgay mai la ngay: "; 
    else{ 
       if(n==2) cout<<"\nNgay kia la ngay: "; 
       else cout<<"\n--> "<<n<<" ngay sau la ngay: "; 
    }
    }
    else cout<<"Khong thuc hien duoc do nhap ngay thang sai ";
} 
};
main()
{
      Date A;
      A.Nhap();
      A.Xuat(); 
      if(A.Hople()==1) cout<<"\n\tNgay thang hop le\n";
      else cout<<"\n\tNgay thang khong hop le\n"; 
      A.cong();
      A.Xuat(); 
      int n;
      cout<<"\nNhap so ngay can cong:\t";cin>>n;
      A.Cong(n);
      A.Xuat();
      getch();
}
