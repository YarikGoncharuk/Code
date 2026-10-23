#include <stdio.h>
#define MAXN 100

void my_strccpy(char to[], char from[]);
// копирует все символы из from в to

void reverse (char s[]);
// переворачивает строку, если в конце есть "\n" остается на месте

int main() {
	char from[MAXN], to[MAXN];
	printf("Write string- ");
	scanf("%99s", from);
	
	my_strccpy(to, from);
	printf("to = %s\n", to);
	
	reverse(to);
	printf("reverse(to) = %s", to);

	return 0;
}
void my_strccpy(char to[], char from[]){
	int i = 0;
	while(from[i] != '\0') {
		to[i] = from[i];
		i = i + 1;
	}
	to[i] = '\0';
}

void reverse (char s[]) {
	int n = 0;
	int i, j;
	char t;
	
	while(s[n] != '\0'){
		n = n + 1;
	}
	
	if(n > 0 && s[n - 1] == '\n'){
		n = n - 1;
	}
	
	i = 0;
	j = n - 1;
	while (i < j) {
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i = i + 1;
		j = j - 1;
	}
}
