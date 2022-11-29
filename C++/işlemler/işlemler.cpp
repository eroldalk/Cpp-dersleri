#include<iostream>

using namespace std;

int main()
{
	int a;//tipi ismi
	a=10;//deger
	cout<< a <<endl;//
	a++;//bir arttır postfix
	cout<< a <<endl;
	++a;//increment bir arttır prefix
	cout<< a <<endl;
	int b=20;
	cout<< a+b <<endl;
	cout<< 10+20*2 <<endl;//işlem önceliği
	
	cout<< 15%2 <<endl;//remainder,modulo 15/2=7,5
	a--; //1 eksilecek
	a=a-1;//assigment atama
	cout<< a <<endl;
	cout<< a++ <<endl;//a nın değeri alınıp sonra 1 arttırılır
	//10 basılır ama hafızada 11 oldu
	cout<< ++a <<endl;//a nın degeri once arttırılır sonra denkleme konur 
	//önce arttırılıp 12 olacak sonra ekranda basılacak
	
	int x=10;
	x=x-1;
	x--;
	--x;
	x-=1;
	x+=5;//x=x+5
	x*=2//x*2
	cout<< x <<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
