#include <iostream>
using namespace std;
int ktrasongto (int n){
	if (n<=1){
		return false;
	}
	for (int i=2; i*i <= n; i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
int main (){
	int a[100],n;
	printf ("nhap so phan tu trong mang la: ");
	scanf ("%d", &n);
	for (int i=0; i<=n-1;i++){
		printf ("nhap phan tu thu %d: ", i+1);
		scanf ("%d", &a[i]);
	}
	for (int i =0; i<=n-1; i++){
		if (ktrasongto (a[i])){
			printf ("%d ", a[i]);
		}
	}
	return 0;
}
