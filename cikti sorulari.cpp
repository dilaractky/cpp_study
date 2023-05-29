#include <iostream>
using namespace std;
//ilk başta return olarak 3'ü yazdığımız için sadece onu agılayacak sonra döngüden çıkacak.
int soru(int deg1,int deg2,int deg3)
{
	deg1=deg1+deg2+deg3;
	return deg3;
	return deg2;
	return deg1;
	return 4;
	
}
int main()
{
	cout<<soru(1,2,3);
	return 0; 
}
