#include <stdio.h>
using namespace std;
int main (){
	int n;
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i =1; i <=n;i++){
		printf ("nhap phan tu thu %d: ", i);
		scanf ("%d",&a[i]);
	}
	for (int i=1; i <=n;i++){
		printf ("%d\n",a[i]);
	}
	return 0;
}
