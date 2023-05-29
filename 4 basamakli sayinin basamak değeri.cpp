#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi,birler,onlar,yuzler,binler;
	cout<<"lütfen 4 basamaklý sayi giriniz"<<endl;
	cin>>sayi;
	birler=sayi%10;
	
	sayi=sayi/10;
	onlar=sayi%10;
	
	sayi=sayi/10;
	yuzler=sayi%10;
	
	sayi=sayi/10;
	binler=sayi%10;
	
	cout<<binler<<"\n"<<yuzler<<"\n"<<onlar<<"\n"<<birler<<endl;
	return 0;
}
