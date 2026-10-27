#include <stdio.h>
#define MAX 100

void find_min_max(int *arr, int n, int *min, int *max);

int main() {
	int n, arr[MAX], min = 0, max = 0;
	printf("Enter the size of the array- ");
	scanf("%d", &n);
	
	printf("Enter the elements- ");
	for(int i = 0; i < n; i = i + 1){
		scanf("%d", &arr[i]);
	}
	find_min_max(arr, n, &min, &max);
	
	printf("Minimum- %d\n", min);
	printf("Maximum- %d", max);
	return 0;
}

void find_min_max(int *arr, int n, int *min, int *max) {
	*min = arr[0];
	for(int i = 0; i < n; i = i + 1){
		if (*min > arr[i]) {
			*min = arr[i];
		}
	}
	*max = arr[0];
	for(int i = 0; i < n; i = i + 1){
		if (*max < arr[i]){
			*max = arr[i];
		}
	}
}
