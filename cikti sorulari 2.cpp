#include <iostream>
using namespace std;
//ilk baþta main fonksiyonundan baþlamamýz gerek.a=1 olduðu için ce f1(a)'ya eþit olduðu 
//için yerin bir yazýyoruz foksiyon mantýðý ile yapýyoruz.
int f2(int c){
	c=c+1;
	return c;
}
int f1(int b){
	b=b+1;
	b=f2(b);
	return b;
}
int main()
{
	int a=1;
	a=f1(a);
	cout<<a;
	return 0;
}
