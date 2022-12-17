#include <iostream>
using namespace std;
#include <math.h>

int main(){
   	int a,b,c;
	cout<<"a kenari giriniz"<<endl;
	cin >> a;
	cout<<"b kenari giriniz"<<endl;
	cin >> b;
	c= sqrt (a*a+b*b);
	cout<<"h= "<< c <<endl;
	cout<<"cevresi= "<< a+b+c <<endl;
	cout<<"alani= "<< (float)a*b/2 <<endl;
}
