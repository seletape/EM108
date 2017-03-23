//Set 3 - Problem 3

#include<stdio.h>
#include<stdlib.h>

int a;
int b;
int c;
int n;
int i;
int c;
void fibonacci();

int main() {
  printf("Welcome to The Fibonacci Sequence!\n");
  a = 1;
  b = 1;
  fibonacci();
  return 0;
}

void fibonacci() {


  printf("1\n1\n");
  for(i = 0; i <= n; ++i) {
    c = a+b;
    a = b;
    b = c;
    printf("%d\n",c);
  }
}
