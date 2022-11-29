#include <iostream>
using namespace std;

int main()
{
    int a;//tipi,ismi
    cout<< "Lutfen notun sayi degerini giriniz ... "<<endl;
    cin>>a;
     if(a<50) 
	{
		cout<< "F"<<endl;
	}
    else if(a<70)
	{
		cout<< "C"<<endl;
	}
    else if(a<90)
	{
		cout<< "B"<<endl;
	}
	else
	{
		cout<< "A"<<endl;
	}
    

}
