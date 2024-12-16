#include <iostream>
using namespace std;
int main (){
	int a[100][100],r, c;
	printf ("nhap so cot cua mang: ");
	scanf ("%d",&c);
	printf ("nhap so hang cua mang: ");
	scanf ("%d",&r);
	for (int i =0; i <= r-1; i++){
		for (int j =0; j <=c-1; j++){
			printf ("nhap gia tri cho phan tu cot %d hang %d: ", j+1, i+1);
			scanf ("%d",&a[j][i]);
		}
	}
	printf ("cac phan tu duoc bieu dien trong ma tran la: \n");
	for (int i = 0; i <= r-1; i++){
		for (int j=0;j<=c-1;j++){
			printf ("%d  ",a[j][i]);
		}
		printf ("\n");
	}
	printf ("cac phan tu ngoai bien la: \n");
	for (int i=0; i <= c-1; i++){
		printf ("%d  ", a[i][0]);
	}
	for (int i=1; i <=r-1; i++){
		printf ("%d  ", a[0][i]);
	}
	for (int i=1; i <=c-1; i++){
		printf ("%d  ", a[i][r-1]);
	}
	for (int i=1; i < r-1; i++){
		printf ("%d  ", a[c-1][i]);
	}
	return 0;
}
