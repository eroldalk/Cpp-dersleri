#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
   cout<<"birinci sayiyi giriniz"<<endl;
   cin>>a;
   cout<<"ikinci sayiyi giriniz"<<endl;
   cin>>b;
   cout<<"ucuncu sayiyi giriniz"<<endl;
   cin>>c;
 	if(a>b && a<c || a>c && a<b)// b---a---c| c---a---b
 	{
 		cout<<"a, b ve c'nin arasinda bir degerdir"<<endl;
	}
	else
	{
		cout<<"a, b ve c'nin arasinda bir deger degildir"<<endl;
	}
	if(a==b && a<c)//a'nýn ve b'ye eþit ve ayný zamanda c'den küçük olup olmadýðý 
 	{
 		cout<<"a, b'ye esit ve ayni zamanda c'den kucuk "<<endl;
	}
	else
	{
		cout<<"a, b'ye esit veya ayni zamanda c'den küçük  degildir"<<endl;
	}
	//a'nýn b'den veya c'den büyük olup olmadýðýný
	if(a>b || a>c)
	{
		cout<<"a, b veya c'den buyuktur"<<endl;
	}
	else
	{
		cout<<"a, b veya c'den kucuktur veya esittir"<<endl;
	}
	if(a==b && a==c)
	{
		cout<<"uc sayi birbirine esittir"<<endl;
	}
	else
	{
	cout<<"uc sayi birbirine esit degildir"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
  
  
  
}
