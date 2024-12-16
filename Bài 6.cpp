#include <iostream>
using namespace std;
int main (){
	int a[5];
	for (int i=0; i<5;i++){
		printf ("nhap phan tu thu %d: ", i+1);
		scanf ("%d",&a[i]);
		if (a[i]%2==0){
			a[i]+=3;
		}
		else {
			a[i]+=2;
		}
	}
	for (int i =0; i < 5; i++){
		printf ("mang moi sau khi thay doi la: %d\n", a[i]);
	}
	return 0;
}
