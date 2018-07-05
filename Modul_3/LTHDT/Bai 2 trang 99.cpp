#include<cstdlib>
#include<iostream>
#include<conio.h>
using namespace std;
class Dathuc{
      private:
            double a[20];
            int n;
      public: 
              Dathuc(){
              n = 3;
                 for(int i=0;i<n;i++){
                         if(i==0) a[0] = -1;
                         if(i==1) a[1] = -2;
                         if(i==2) a[2] = -3;
                         if(i==3) a[3] = 4;       
                 }         
              }
              void Nhapdathuc(){
                   cout<<"\n\tNhap bac cua da thuc:\t";
                   cin>>n;
                   for(int i=0;i<=n;i++){
                           cout<<"\tNhap cac he so cua da thuc:\t";
                           cin>>a[i];                
                   }     
              }
              void Indathuc(){
                 for(int i=0;i<=n;i++){
                         if(i==0){
                         	if(a[i]<0){
                         		cout<<" - "<<(-1)*a[i]<<"x^"<<i;
                                 (-1)*a[i];
                         	}
                            else cout<<a[i]<<"x^"<<i;
                         }	
                         else
                         if(i<n&&a[i]>0)
                                 cout<<" + "<<a[i]<<"x^"<<i;
                         else
                         if(i<n&&a[i]<0){
                         	cout<<" - "<<(-1)*a[i]<<"x^"<<i;
                         	(-1)*a[i];
                         }
                         else
                         if(i==n&&a[i]>0)
                                 cout<<" + "<<a[i]<<"x^"<<i;
                         else
                         if(i==n&&a[i]<0)
                                 cout<<" - "<<(-1)*a[i]<<"x^"<<i;
                                 (-1)*a[i];
                 }           
              }
              Dathuc operator+(Dathuc b){
                     Dathuc Temp;
                     if(n==b.n){
                     	for(int i=0;i<=b.n;i++){
                            Temp.a[i] = a[i]+b.a[i];
                            Temp.n = i;
						 }
						 return Temp;
                    }
					if(n>b.n){
						for(int i=0;i<=n;i++){
							if(i!=b.n||i==b.n){
								Temp.a[i] = a[i]+b.a[i];
                            	Temp.n = i;
							}
							else{
								Temp.a[i] = a[i];
								Temp.n = i;
							}
						}
						return Temp;
					}
					else{
						for(int i=0;i<=b.n;i++){
							if(i<=n){
								Temp.a[i] = a[i]+b.a[i];
								Temp.n = i;
							}
							else{
								Temp.a[i] = b.a[i];
								Temp.n = i;
							}
						}
						return Temp;
					}
			  }
			  Dathuc operator-(Dathuc b){
			  		Dathuc Temp;
			  		if(n==b.n){
                     	for(int i=0;i<=b.n;i++){
                            Temp.a[i] = a[i]-b.a[i];
                            Temp.n = i;
						 }
						 return Temp;
                    }
					if(n>b.n){
						for(int i=0;i<=n;i++){
							if(i!=b.n||i==b.n){
								Temp.a[i] = a[i]-b.a[i];
                            	Temp.n = i;
							}
							else{
								Temp.a[i] = a[i];
								Temp.n = i;
							}
						}
						return Temp;
					}
					else{
						for(int i=0;i<=b.n;i++){
							if(i<=n){
								Temp.a[i] = a[i]-b.a[i];
								Temp.n = i;
							}
							else{
								Temp.a[i] = b.a[i];
								Temp.n = i;
							}
						}
						return Temp;
					}
			  }
			  Dathuc operator*(Dathuc b){
			  		Dathuc Temp;
					if(n==b.n){
                     	for(int i=0;i<=b.n;i++){
                            Temp.a[i] = a[i]*b.a[i];
                            Temp.n = i;
						 }
						 return Temp;
                    }
					if(n>b.n){
						for(int i=0;i<=n;i++){
							if(i!=b.n||i==b.n){
								Temp.a[i] = a[i]*b.a[i];
                            	Temp.n = i;
							}
							else{
								Temp.a[i] = a[i];
								Temp.n = i;
							}
						}
						return Temp;
					}
					else{
						for(int i=0;i<=b.n;i++){
							if(i<=n){
								Temp.a[i] = a[i]*b.a[i];
								Temp.n = i;
							}
							else{
								Temp.a[i] = b.a[i];
								Temp.n = i;
							}
						}
						return Temp;
					}
			  }
			  
};
/*
ostream & operator<<(ostream& o, Dathuc &b){
		cout<<"\tDa thuc la:\t";
}

ostream &operator <<(ostream &out,const Dathuc &x)
{  
  cout<<"\n da thuc vua nhap : ";        
  for(int i=0;i<=x.n;i++)
  {
    out<<x.p[i]<<"  ";      
}   
return out;          
}    '
*/    
main()
{
      Dathuc A;
      A.Nhapdathuc();
       Dathuc B;
      B.Nhapdathuc();
      cout<<"\n\tDa thuc vua nhap A:\t";
      A.Indathuc();
      cout<<"\n\tDa thuc vua nhap B:\t";
      B.Indathuc();
      Dathuc C = A+B;
      cout<<"\n\n\tDa thuc A+B = \t";
      C.Indathuc();
      Dathuc D = A-B;
      cout<<"\n\n\tDa thuc A-B = \t";
	  D.Indathuc();
	  Dathuc E = A*B;
      cout<<"\n\n\tDa thuc A*B = \t";
      E.Indathuc();
      getch();
}
