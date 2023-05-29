#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi,sayac,enBuyuk;
	for(sayac=0; sayi<=4; sayac++){
		cout<<"sayýlarý giriniz"<<endl;
		cin>>sayi;
		if(sayi>enBuyuk){
			enBuyuk=sayi;
		}
	}
	cout<<"girilen en büyük sayý="<<enBuyuk<<endl;
	return 0;
}
