#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	for(int i=1; i<=10; i++){
		for(int a=1; a<=10; a++){
			cout<< i << " x " << a << " = " << i*a <<"\n";
		}
		cout<<endl;
	}
	return 0;
}
