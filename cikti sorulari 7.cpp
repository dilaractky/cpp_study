#include <iostream>
using namespace std;
void fonksiyon(int*A,int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n-1;j++)
	{
		if(A[j]>A[j+1]){
			int temp=A[j];
        	A[j]=A[j+1];
	        A[j+1]=temp;
		}
	}
}
int main()
{
	int dizi[5]={12,5,7,4,9};
	fonksiyon(dizi,5);
	for(int i=0;i<5;i++)
	{
		cout<<dizi[i]<<"";
		
	}
		return 0;
}
//bu kod sýralama algoritmasý kullanýlarak bir dizideki elemanlarý küçükten büyüðe dizmek için yazýlan programdýr.



