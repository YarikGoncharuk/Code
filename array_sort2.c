#include <stdio.h>
#define LEN 100

int get_n(void) {
	int n;
	printf("write the meaning- ");
	scanf("%d", &n);
	return n;
}

void get_array(int ar[], int n) {
	int i;
	for(i = 0; i < n; i = i + 1) {
		scanf("%d", &ar[i]);
	}
}

void print_array(int ar[], int n) {
	int i;
	for(i = 0; i < n; i = i + 1) {
		printf("%d ", ar[i]);
	}
}

void sort_array(int ar[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (ar[j] > ar[j + 1]) {
				int t = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = t;
			}
		}
	}
}

int main() {
	int n = get_n();
	int ar[LEN];
	
	get_array(ar, n);
	printf("Result:\n");
	print_array(ar, n);
	sort_array(ar, n);
	printf("\n");
	print_array(ar, n);
	
	return 0;
}
