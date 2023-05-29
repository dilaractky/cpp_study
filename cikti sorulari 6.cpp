#include <iostream>
using namespace std;
int fonksiyon(int *A,int n)
{
	int dondur=0;
	for(int i=0;i<n;i++){
		if(A[i]%2==0)
		dondur++;
	}
	return dondur;
}
int main(){
	int dizi[5]={12,5,7,4,9};
	cout<<fonksiyon(dizi,5);
	return 0;
}
//dizi elemanlarýndan kaç tanesinin çift olduuðu bulunup ekrana yazdýrma programýdýr
