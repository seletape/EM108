#include <stdio.h>
#include <stdlib.h>

float lenght;
float width;
float depth;


void input();
void

int main() {
	printf("Greetings, if you wouldn't mind filling out the follow details\n");
	input();

	

	return 0;
}

void input() {
	printf("Please enter the lenght of the container: ");
	scanf("%f", &lenght);
	printf("\n");

	printf("Please enter the width of the container:");
	scanf("%f", &width);
	printf("\n");

	printf("Please enter the depth of the container:");
	scanf("%f", &depth);
	printf("\n");
}
