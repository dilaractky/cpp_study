#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int yukseklik,taban;
	float alan;
	cout<<"lütfen üçgenin yüksekliğini giriniz"<<endl;
	cin>>yukseklik;
	cout<<"lütfen üçgenin tabanını giriniz"<<endl;
	cin>>taban;
	alan=(taban*yukseklik)/2;
	cout<<"üçgenin alanı="<<alan<<endl;
	return 0;
}
