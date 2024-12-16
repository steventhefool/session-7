#include <stdio.h>
using namespace std;
int main (){
	int max, min, a[5];
	for (int i = 0; i <5; i++){
		printf ("nhap phan tu thu %d: ", i+1 );
		scanf ("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (int i = 1; i <5; i++){
			if (a[i]>max){
				max = a[i];
			}
			if (a[i]<min){
				min = a[i];
			}
		}
	printf ("gia tri lon nhat cua phan tu la: %d\n", max);
	printf ("gia tri nho nhat cua phan tu la: %d", min);
	return 0;
}
