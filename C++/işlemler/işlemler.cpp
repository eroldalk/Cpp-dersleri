#include<iostream>

using namespace std;

int main()
{
	int a;//tipi ismi
	a=10;//deger
	cout<< a <<endl;//
	a++;//bir artt�r postfix
	cout<< a <<endl;
	++a;//increment bir artt�r prefix
	cout<< a <<endl;
	int b=20;
	cout<< a+b <<endl;
	cout<< 10+20*2 <<endl;//i�lem �nceli�i
	
	cout<< 15%2 <<endl;//remainder,modulo 15/2=7,5
	a--; //1 eksilecek
	a=a-1;//assigment atama
	cout<< a <<endl;
	cout<< a++ <<endl;//a n�n de�eri al�n�p sonra 1 artt�r�l�r
	//10 bas�l�r ama haf�zada 11 oldu
	cout<< ++a <<endl;//a n�n degeri once artt�r�l�r sonra denkleme konur 
	//�nce artt�r�l�p 12 olacak sonra ekranda bas�lacak
	
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
