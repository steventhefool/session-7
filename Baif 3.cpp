#include <iostream>
using namespace std;
int main(){
	int a[5], count=0;
	for (int i =1; i <6; i++){
		printf ("nhap phan tu thu %d: ", i);
		scanf ("%d", &a[i]);
	}
	for (int i =1; i <6; i++){
		if ((a[i]%2==0) && (count != 5)){
			printf ("%d ",a[i]);
		}
		else {
			count++;
		}
		if (count == 5){
			for (int i = 1; i < 6; i++){
				printf ("%d ", a[i]);
			}
		}
	}
	return 0;
}
