#include <iostream>
using namespace std;
//ilk ba�ta main fonksiyonundan ba�lamam�z gerek.a=1 oldu�u i�in ce f1(a)'ya e�it oldu�u 
//i�in yerin bir yaz�yoruz foksiyon mant��� ile yap�yoruz.
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
