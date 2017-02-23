#include <stdio.h>
#include <stdlib.h>

//Declaring variable and functions for the program
float x;
float y;
float z;
void input();
void calculations();
void maximum();
void minimum();

int main() {
  printf("Welcome to the the Three Number Calculator\n");
  input();
  calculations();
  maximum();
  minimum();
  printf("Thank you for using this Calculator.\n");
  return 0;
}

void input() {
  printf("Please input the following data.\n");

  printf("The first number is: ");
  scanf("%f", &x);
  printf("\n");

  printf("The second number is: ");
  scanf("%f", &y);
  printf("\n");


  printf("The third number is: ");
  scanf("%f", &z);
  printf("\n");
}

//The calculations for sum, product and average
void calculations() {
  printf("The sum of the three numbers is: %.3f\n", x + y + z);
  printf("The product of the three numbers is: %.3f\n", x * y * z);
  printf("The average of the three numbers is: %.3f\n", (x + y + z)/3 );
}

//The largest number of all three
void maximum() {
  if((x >= y) && (x >= z)) {
    printf("The maximum is: %.3f\n", x);
  }
  else if((y >= x) && (y >= z)) {
    printf("The maximum is: %.3f\n", y);
  }
  else if((z >= x) && (z >= y)) {
    printf("The maximum is: %.3f\n", z);
  }
  else {
    printf("The numbers equal each other.\n");
  }
}

//The smallest number of all three
void minimum() {
  if((x <= y) && (x <= z)) {
    printf("The minimum is: %.3f\n", x);
  }
  else if((y <= x) && (y <= z)) {
    printf("The minimum is: %.3f\n", y);
  }
  else if((z <= x) && (z <= y)) {
    printf("The minimum is: %.3f\n", z);
  }
  else {
    printf("The numbers equal each other.\n");
  }
}
