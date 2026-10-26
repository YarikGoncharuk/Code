#include <stdio.h>
int main() {
	int password, pas;
	printf("Write password (numbers)- ");
	scanf("%d", &password);
	
	do
	{
		printf("Write password again- ");
		scanf("%d", &pas);
		
		if (password == pas) {
			printf("Correct! The password is set.");
			break;
		}
		else if (password != pas){
			printf("Incorrect!\n");
		}
	} while(password != pas);
	return 0;
}
