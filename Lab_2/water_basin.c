#include <stdio.h>
#include <stdlib.h>

//Declaring Variable
float length;
float width;
float depth;
float paint_required;

//Declaring Functions
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

//Asking the user for input
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

	printf("Please can you enter the amount of paint needed to cover one square meter of a surface: ");
	scanf("%f", &paint_required);
	printf("\n");
}

//Calculating the volume of the basin
void volume() {
	if((length != 0) || (width != 0) || (depth != 0)){
		printf("The volume of water the basin can hold is: %f", length * width * depth);
		printf("\n");
	}
	else {
		printf("Incorrect value entered, please enter new values.\n");
		input();
	}
}

//Calculating the surface area of the basin
void surface_area() {
	if((length != 0) || (width != 0) || (depth != 0)) {
		printf("The surface area of the basin is: %f", length*width + 2*length*depth + 2*width*depth);
		printf("\n");
	}
	else{
		printf("Incorrect value entered, please enter new values.\n");
		input();
	}
}
