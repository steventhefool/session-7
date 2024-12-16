#include <iostream>
using namespace std;
int main (){
	int n, a[100];
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	for (int i=0; i <n; i++){
		printf ("nhap phan tu so %d: ",i);
		scanf ("%d",&a[i]);
	}
	printf ("mang vua nhap: ");
	for (int i =0; i < n; i++){
		printf ("%d ", a[i]);
	}
	printf ("\ndo dai cua mang la: %d", n);
	return 0;
}
