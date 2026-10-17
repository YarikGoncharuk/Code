#include <stdio.h>
int main() {
	int i, j, t;
	int a[100] = {2,1,3,6,5,4};
	int n = 6;
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] =  a[j + 1];
				a[j + 1] = t; 
			}
		}
	}
	
	for (j = 0; j < n; j++) {
		printf("%d ", a[j]);
	}
	return 0;
}
