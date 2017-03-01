//Set 1 - Problem 4

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float a;
float b;
float c;
void input();

int main() {
  printf("Welcome to The Root Calculator!\n");
  input();
  printf("The quadratic is: %.3fx^2 + %.3fx + %.3f = 0\n", a,b,c );

  return 0;
}

void input() {
  printf("Please enter the co-efficient of x^2: ");
  scanf("%f", &a);
  printf("\n");

  printf("Please enter the co-efficients of x: ");
  scanf("%f", &b);
  printf("\n");

  printf("Please enter the constant: ");
  scanf("%f", &c);
  printf("\n");

  if ((b*b) > (4*a*c)) {
    printf("Please enter correct co-efficients and constant\n");
    input();
  }
}
