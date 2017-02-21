#include <stdio.h>
#include <stdlib.h>

//Declare Variables
float length;
float width;
float weed_killer;


//Declare Functions
void input();
void calculations();

int main() {
  printf("Welcome to the Weed Killer program.\n");
  input();

  calculations();

  return 0;
}

//Getting user input for length and width and weed killer needed.
void input() {
  printf("Please can you enter the length of the field: ");
  scanf("%f", &length);
  printf("\n");

  printf("Please can you enter the width of the field: ");
  scanf("%f", &width);
  printf("\n");

  printf("Please enter the amount of weed killer to treat the field is: ");
  scanf("%f", &weed_killer);
  printf("\n");
}

void calculations() {
  printf("The area of the field in square metres is: %f\n", length * width);
  printf("The area of the field in square feet is : %f\n", length * width * 10.7639);
  printf("The volume of weed killer to kill all the weeds in one square metre is: %f\n", weed_killer / (length * width * 10.7639) );
  printf("The amount of weed killer needed in total is: %f\n", )
}
