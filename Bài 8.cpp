#include <iostream>
using namespace std;
int main (){
	int a[100][100],r, c;
	printf ("nhap so cot cua mang: ");
	scanf ("%d",&c);
	printf ("nhap so hang cua mang: ");
	scanf ("%d",&r);
	for (int i =0; i <=r-1; i++){
		for (int j=0; j<=c-1;j++){
			printf ("nhap phan tu hang %d cot %d: ", i+1, j+1);
			scanf ("%d", &a[j][i]);
		}
	}
	for (int i =0; i <=r-1; i++){
		for (int j=0; j<=c-1;j++){
			printf ("%d  ", a[j][i]);
		}
	printf ("\n");
}
	return 0;
}
