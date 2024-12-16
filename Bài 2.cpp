#include <iostream>
using namespace std;
int main (){
	int a[4];
	for (int i =1; i <6; i ++){
		printf ("nhap phan tu thu %d: ", i);
		scanf ("%d", &a[i]);
	}
	for (int i =1; i < 6; i++){
		printf ("%d ", a[i]);
	}
	return 0;
}
