#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int s1,s2,s3;
	cout<<"lütfen 1. sayi giriniz=";
	cin>>s1;
	cout<<"lütfen 2. sayi giriniz=";
	cin>>s2;
	cout<<"lütfen 3. sayi giriniz=";
	cin>>s3;
	if(s1>=s2 && s1>=s3){
		cout<<"büyük olan sayý s1'dir"<<endl;
	}else if(s2>=s1 && s2>=s3){
		cout<<"büyük olan sayý s2'dir"<<endl;
	}else{
		cout<<"büyük olan s3'tür"<<endl;
	}
	return 0;
}
