#include <stdio.h>
#include <stdlib.h>

unsigned int N;
int i;
int j;
int sum;//The sum of all the numbers
int prod;//The product of all the numbers
float avrg;//average

void input();
void calculations();

int main() {
  printf("Welcome to the Calculator.\n");
  input();

  calculations();
  printf("Thank you for using the calculator.\n");

return 0;
}

void input() {
  printf("How many numbers would you like to enter to the calculator: ");
  scanf("%d", &N);
  printf("\n");
  if (N < 0) {
    input();
  }
}

void calculations() {
    prod = 1;

    for(i=1; i <=N; ++i)
    {
          sum = sum + i;
          prod = prod *i;
    }
    avrg = sum / N;
    printf("The sum of the numbers is = %d\n", sum);
    printf("The product of the numbers is = %d\n", prod);
    printf("The average of the numbers is = %.3f\n", avrg);
}
