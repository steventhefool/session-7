#include <stdio.h>
using namespace std;
int main (){
	int a[100],n,count=0;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d", &n);
	for (int i =0; i <=n-1;){
		printf ("nhap phan tu thu %d (phai la so le): ",i+1);
		scanf ("%d",&a[i]);
		if (a[i]%2==1){
			i++;
			continue;
		}
	}
	for (int i = 0; i <=n-1; i++){
		printf ("cac phan tu so le trong mang la: %d\n", a[i]);
}
	return 0;
}
