#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int s1,s2,s3;
	cout<<"l�tfen 1. sayi giriniz=";
	cin>>s1;
	cout<<"l�tfen 2. sayi giriniz=";
	cin>>s2;
	cout<<"l�tfen 3. sayi giriniz=";
	cin>>s3;
	if(s1>=s2 && s1>=s3){
		cout<<"b�y�k olan say� s1'dir"<<endl;
	}else if(s2>=s1 && s2>=s3){
		cout<<"b�y�k olan say� s2'dir"<<endl;
	}else{
		cout<<"b�y�k olan s3't�r"<<endl;
	}
	return 0;
}
