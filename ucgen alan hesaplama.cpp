#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int yukseklik,taban;
	float alan;
	cout<<"l�tfen ��genin y�ksekli�ini giriniz"<<endl;
	cin>>yukseklik;
	cout<<"l�tfen ��genin taban�n� giriniz"<<endl;
	cin>>taban;
	alan=(taban*yukseklik)/2;
	cout<<"��genin alan�="<<alan<<endl;
	return 0;
}
