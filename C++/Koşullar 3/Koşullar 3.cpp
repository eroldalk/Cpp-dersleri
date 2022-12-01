 #include <iostream>
using namespace std;

int main(){
    int x,y,z;
   cout<<"lutfen birinci sayiyi giriniz"<<endl;
   cin>>x;
   cout<<"lutfen ikinci sayiyi giriniz"<<endl;
   cin>>y;
   cout<<"lutfen ucuncu sayiyi giriniz"<<endl;
   cin>>z;
   int enbuyuk=x;
    if(y>enbuyuk)
   	 enbuyuk = y;
	if(z>enbuyuk)
   	 enbuyuk = z;
   	int enkucuk = x;
   	if(y<enkucuk)
   	 enkucuk = y;
   	if(z<enkucuk)
   	 enkucuk = z;
   	 cout<<"enbuyuk:"<< enbuyuk << endl;
   	 cout<<"enkucuk:"<< enkucuk << endl;
   	 
   	 
   	 
   	 
   	 
   	 // 5.ve 32. satırlar kodların başlarıdır
   	 
   	 
   	if(x>y && x>z)
	{
   	   cout<<"enbuyuk : "<< x << endl;
	}
   	else if(y>z && y>x) 
	{
   	  cout<<"enbuyuk : "<< y << endl;
   	  
	}
	else
	{
		cout<<"enbuyuk : "<< z << endl;	
	}
	
	if(x<y && x<z)
	{
   	   cout<<"enkucuk : "<< x << endl;
	}
   	else if(y<z && y<x) 
	{
   	  cout<<"enkucuk : "<< y << endl;
   	  
	}
	else
	{
		cout<<"enkucuk : "<< z << endl;
	}
   	 
  return 0; 	 
}
