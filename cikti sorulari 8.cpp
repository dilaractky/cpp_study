//0'dan  kullan�c�n�n girdi�i say�ya kadar 7'nin katlar�n� ekrana yazd�rma.
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
//1'den ba�lat�nca da while i�ine f a��p index % 7==0 olmas� laz�m.
