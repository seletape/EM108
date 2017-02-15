#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char SPORT[100];

	printf("Welcome to Sport's Survey...\n");
	printf("Please enter your favourite sport:\n");
	scanf("%s", SPORT);

	if(strcmp(SPORT, "Soccer") == 0)
		printf("Good Choice! I like %s, too!\n", SPORT);
	else
		printf("What? %s? Not good enough! I like Soccer.\n", SPORT);

	printf("Thanks for taking part in my survey...\n");

	return(EXIT_SUCCESS);
}