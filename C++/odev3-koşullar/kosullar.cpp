#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"lutfen birinci sayi girin"<<endl;
    cin>>x;
    cout<<"lutfen ikinci sayi girin"<<endl;
    cin>>y;
    
    bool esit = false;
    bool kucuk = false;// ilk sayi
    //sytax error
    //logic error -> mantık hatası
    
    if(x==y)
    {
    	esit = true;
    	 cout<<"Sayilari Esittir"<<endl;
    	 cout<<"Sayilari farkli degildir"<<endl;
	}
	else
	{
		cout<<"Sayilari Esit degildir"<<endl;
		cout<<"Sayilari Farklilir"<<endl;
	}

	if(x<y)
	{
		kucuk = true;
		cout<<"ilk sayi kucuktur"<<endl;
		cout<<"ilk sayi kucuk esittir"<<endl;
	}
	
	else 
	{
		cout<<"ilk sayi kucuk degildir"<<endl;	
		if(esit)
			cout<<"ilk sayi kucuk esittir"<<endl;
		else
			cout<<"ilk sayi kucuk  esit degildir"<<endl;
	}
		
		
	if(kucuk)//x>y(kucuk == false)
	{
		cout<<"ikinci sayi buyuktur"<<endl;
		cout<<"ikinci sayi buyuk esittir"<<endl;
	}
		
	else 
	{
		cout<<"ikinci sayi buyuk degildir"<<endl;
		if(esit)
			cout<<"ilk sayi buyuk esittir"<<endl;
		else
			cout<<"ilk sayi buyuk esit degildir"<<endl;
	}
					
		
	return 0;
}
