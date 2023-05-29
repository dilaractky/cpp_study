#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int r,h;
	float V,pi=3.142;
	cout<<"silindirin yarýçapýný giriniz"<<endl;
	cin>>r;
	cout<<"silindirin yüksekliðini giriniz"<<endl;
	cin>>h;
	V=(pi*r*2*h);
	cout<<"silindirin hacmi="<<V<<endl;
	return 0;
}
