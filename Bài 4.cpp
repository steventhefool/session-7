#include <stdio.h>
using namespace std;
int main (){
	int a[100],n;
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d",&n);
	for (int i =1; i <=n;i++){
		printf ("nhap phan tu thu %d: ", i);
		scanf ("%d",&a[i]);
	}
	for (int i=1; i <=n;i++){
		printf ("%d\n",a[i]);
	}
	return 0;
}
