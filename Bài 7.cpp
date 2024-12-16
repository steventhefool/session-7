#include <stdio.h>
using namespace std;
int main (){
	int a[100],count=0,n;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d", &n);
	for (int i =0; i <=n-1;i++){
		printf ("nhap phan tu thu %d (phai la so le): ",i+1);
		scanf ("%d",&a[i]);
		if (a[i]%2!=0){
			count++;
		}
	}
	for (int i = 0; i <=n-1; i++){
	if (count==n){
		printf ("cac phan tu so le trong mang la: %d\n", a[i]);
	}
}
	if (count !=n){
		printf ("co it nhat mot phan tu khong phai la so le. \n");
	}
	return 0;
}
