#include <iostream>
using namespace std;

int main()
{
    int a;//tipi,ismi
    a= 10;//deðer
    if(a>=20) //boolean: true | false
	{
		cout<< "a 20 den kucuk "<<endl;
	}
//	if(a>20)  fazla if yazýlmamalýdýr 
//	{
//		cout<< "a 20 den kucuk "<<endl;
//	}
	else if(a==20)
	{
		cout<< "a 20 ye eþit "<<endl;
	}
	else if(a==15)
	{
		cout<< "a 15 e eþittir "<<endl;
	}
	else
	{
		cout<< "a 20 den kucuk"<<endl;
	}
}
