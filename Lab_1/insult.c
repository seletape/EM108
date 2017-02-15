#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char name[100];

	printf("Welcome to INSULT...\n");
	printf("Please enter your name:\n");
	scanf("%s", name);

	if(strcmp(name, "John") == 0)
		printf("Hello, %s. Welcome to my program!\n", name);
	else
		printf("I don't like you, %s. Good bye!\n", name);

	printf("Bye from INSULT...\n");

	return(EXIT_SUCCESS);
}