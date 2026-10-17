#include <stdio.h>
int main() {
	int n, i, j, t;
	scanf("%d", &n);
	
	int a[100];
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int i_min;
	
	for (i = 0; i < n - 1; i++) {
		i_min = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[i_min]) 
				i_min = j;
		}
		t = a[i_min];
		a[i_min] =  a[i];
		a[i] = t;
	}
	
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
