//0'dan  kullanýcýnýn girdiði sayýya kadar 7'nin katlarýný ekrana yazdýrma.
#include <iostream>
using namespace std;
int main(){
	int index=0;
	int max;
	cout<<"lutfen max degeri giriniz=";
	cin>>max;
	while(index<=max){
		cout<<index<<endl;
		index=index+7;
	};
	return 0;
}
//1'den baþlatýnca da while içine f açýp index % 7==0 olmasý lazým.
