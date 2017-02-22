#include <stdio.h>
#include <stdlib.h>

float n;

void input();
void calculations();

int main() {
  printf("Welcome to the Calculator.");
  input();
  calculations();

}

void input() {
  printf("How many numbers would you like to enter to the calculator?");
  scanf("%f", &n);
  printf("\n");
}

void calculations() {
  for(n)
}
