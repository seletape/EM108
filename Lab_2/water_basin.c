#include <stdio.h>
#include <stdlib.h>

float length;
float width;
float depth;


void input();
void volume();
void surface_area();

int main() {
	printf("Greetings, if you wouldn't mind filling out the follow details.\n");
	input();
	volume();
	surface_area();
	printf("Thanks for taking part.\n");
	return 0;
}

void input() {
	printf("Please enter the length of the container: ");
	scanf("%f", &length);
	printf("\n");

	printf("Please enter the width of the container:");
	scanf("%f", &width);
	printf("\n");

	printf("Please enter the depth of the container:");
	scanf("%f", &depth);
	printf("\n");
}

void volume() {
	do {
		printf("Incorrect value entered, please enter new values.\n");
		input();
	} while ((length = 0) || (width = 0) || (depth = 0));
	printf("The volume of water the basin can hold is: %f", length * width * depth);
	printf("\n");

}

void surface_area() {
	do {
		printf("Incorrect value entered, please enter new values.\n");
		input();
	} while ((length = 0) || (width = 0) || (depth = 0));
	printf("The surface area of the basin is: %f", length*width + 2*length*depth + 2*width*depth);
	printf("\n");
}
