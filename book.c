#include <stdio.h>
#define MAX 10

struct Book {
	char title[100];
	char author[50];
	int year;
	float price;
};

int addBook(struct Book books[], int count);

void print_book(struct Book books[], int count);

int main() {
	struct Book books[MAX];
	int count = 0;
	int choice = -1;
	
	while(choice != 0){
		printf("\n1) Add book\n");
		printf("2) Show all book\n");
		printf("0) Exit\n");
		printf("Choice: ");
        scanf("%d", &choice);
		printf("\n");
		
		if (choice == 1) {
			count = addBook(books, count);
		}
		else if (choice == 2) {
			print_book(books, count);
		}
		else if (choice == 0) {
			printf("Goodbye!");
		}
		else
			printf("There is no such item.");
	}
	return 0;
}

int addBook(struct Book books[], int count) {
	if (count >= MAX) {
		printf("There are no seats.");
		return count;
	}
	printf("Title: ");
	scanf(" %99[^\n]", books[count].title);
	
	printf("Author: ");
	scanf(" %49[^\n]", books[count].author);
	
	printf("Year: ");
	scanf("%d", &books[count].year);
	
	printf("Price: ");
	scanf("%f", &books[count].price);
	
	return count + 1;
}

void print_book(struct Book books[], int count){
	if (count == 0) {
		printf("The list is empty.\n");
	}
	for(int i = 0; i < count; i = i + 1){
		printf("%d) %s - %s, %d, %.2f.\n", i + 1, books[i].title, books[i].author, books[i].year, books[i].price);
	}
}
