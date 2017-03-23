//Set 4 - Problem 5
#include <stdio.h>
#include <stdlib.h>

float sale;
float commision_earned;
int choice;
void a();


int main() {
    printf("Welcome to the Commision Calculator\n");
    bbf

    
  a();
}

void a() {
  printf("Please enter the amount of sales: ");
  scanf("%f", &sale);
  printf("\n");
  if(sale > 20000) {
    commision_earned = (((sale - 20000) * .0025) + (9999 * .1) + (10000 * .05));
    printf("The total commision earned is: %.3f\n", commision_earned);
  }
  else if ((sale > 10000) && (sale < 20000)) {
    commision_earned = (((sale - 10000)*.1) + (10000*.05));
    printf("The total commision earned is: %.3f\n", commision_earned);
  }
  else {
    commision_earned = (sale * .05);
    printf("The total commision earned is: %.3f\n", commision_earned);
  }

  printf("Would you like to use the calculater again.\nPlease enter 0 to repeat or any other number to exit: ");
  scanf("%d", &choice);
  if(choice == 1) {
    a();
  }
}
