//Problem 1 - B: Write a program that prints other. Use “for” loops.
#include <stdio.h>
#include <stdlib.h>

int i;
int j;
char stars;

int main() {
  //Start rectangle
  for(i = 0; i < 5; ++i) {
    printf("***********\n");
  }

  printf("\n");

  //Start Decreasing Number of Stars
  for(i = 10; i > 0; --i){
    for(j = i; j > 0; --j){
      printf("*");
    }
    printf("\n");
  }

  printf("\n");

  //Start Increasing The Number of Stars
  for(i = 0; i < 11; ++i){
    for(j = i; j > 0; --j){
      printf("*");
    }
    printf("\n");
  }
}
