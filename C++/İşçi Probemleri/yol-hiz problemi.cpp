#include <iostream>
using namespace std;
#include <math.h>

int main(){
   	int yol,hiz;
	cout<<"mesafeyi giriniz !!"<<endl;
	cin >> yol;
	cout<<"hizi giriniz !!"<<endl;
	cin >> hiz;
	cout<<"tahmini varis suresi= "<< yol/hiz;
	int saat = yol/hiz;
	float dakikakismi = (float)yol/hiz - (int)yol/hiz;
	int dakika = dakikakismi*60;
	cout<<" saat ve "<< dakika << " dakikadir"<<endl;
   	
}
