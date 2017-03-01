//Set 4 - Problem 1

#include <stdio.h>
#include <stdlib.h>

float a;
float b;
float c;
float d;
void input();
void max();


int main() {
  printf("Welcome to the Maximum Calculator!\n");
  input();
  max();
  printf("Thank you for using this Calculator\n");
  return 0;
}

void input() {
  printf("Please fill out the following data.\n");

  printf("The first number is: ");
  scanf("%f", &a);
  printf("\n");

  printf("The second number is: ");
  scanf("%f", &b);
  printf("\n");

  printf("The third number is: ");
  scanf("%f", &c);
  printf("\n");

  printf("The fourth number is: ");
  scanf("%f", &d);
  printf("\n");
}

void max() {
  if((a > b) && (a > c) && (a > d)) {
    printf("The maximum is: %.3f\n", a);
  }
  else if((b > a) && (b > c) && (b > d)) {
    printf("The maximum is: %.3f\n", b);
  }
  else if((c > a) && (c > b) && (c > d)) {
    printf("The maximum is: %.3f\n", c);
  }
  else if((d > a) && (d > b) && (d > c)) {
      printf("The maximum is: %.3f\n", d);
  }
  else {
    printf("The numbers equal each other.\n");
  }
}
