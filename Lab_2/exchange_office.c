#include <stdio.h>
#include <stdlib.h>

//Declaring Variable and Function
int eur;
void choice();

int main() {
  printf("Greetings, welcome to the Currency Exchange. Here are the rates:\n");
  printf("EURO\t USD\t   GBP\n");
  for(int eur = 1; eur < 11; ++eur){
    printf("%d",eur);
    printf("\t %.3f", 1.293 * eur);
    printf("\t   %.3f", 0.693 * eur);
    printf("\n");
  }
  printf("\n\n\n");
  choice();

  printf("Thanks for using this Exchange\n");

  return 0;
}

//Menu
void choice() {
  printf("Enter 1 to convert from EURO to USD.\n");
  printf("Enter 2 to convert from EURO to GBP.\n");
  int choice1;
  printf("Choice: ");
  scanf("%d", &choice1);
  printf("\n");
  switch(choice1) {
    //Convert EURO to USD
    case 1:
      printf("You've picked EURO to USD\n");
      printf("Please enter amount to be converted: ");
      scanf("%d", &eur);
      printf("That is $ %f", 1.293 * eur);
      printf("\n");
      break;
    //Convert EURO to GBP
    case 2:
      printf("You've picked EURO to GBP\n");
      printf("Please enter amount to be converted: ");
      scanf("%d", &eur);
      printf("That is $ %f", .693 * eur);
      printf("\n");
      break;
    default:
      printf("You have made an illegal choice.\n");
      printf("Please enter available choice.\n\n\n");
      choice();
    }
}
