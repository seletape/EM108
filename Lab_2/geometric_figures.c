#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("*\n**\n***\n****\n");
  printf("\n\n\n");

  for(int i = 0; i < 5; ++i) {
    printf("s s s s s\n");
  }

  printf("\n\n\n");

  printf("     s\n   s s s\n s s s s s\n   s s s\n     s\n");

  return 0;
}
