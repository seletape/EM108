#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct containing all the information for the
typedef struct car {
  int year;
  char number[9];
  char colour[10];
  float engine;
  float tax;
} car_type;

int option;
int i;

void user_menu();
int tax(car_type cars[],int i);

int main() {
  car_type cars[6];
  FILE *indata;
  indata = fopen("indata.txt","r");
  for (i = 0; i < 6; ++i) {
    fscanf(indata , "%d %s %s %f", &cars[i].year, cars[i].number, cars[i].colour, &cars[i].engine);

    }
  printf("Welcome to the Car Registration and Taxation\n");
  user_menu();

  return 0;
}

void user_menu() {
  printf("Please choose one of the options below:\n");
  printf("1.To print the results to the screen only, press 1\n");
  printf("2.To print the results to the file only, press 2\n");
  printf("3.To print the results to both the screen and file, press3\n");
  scanf("%d", &option);

  switch(option){
    case 1:
      printf("You picked option 1, print the results to the screen only.\n");
      for (i = 0; i < 6; ++i){
        tax(cars,i);
        printf("The tax on car %d is: $%f/year\n",i+1, cars[i].tax);
      }
      break;
    case 2:
      printf("You picked option 2, print the results to the file only.\n");
      for (i = 0; i < 6; ++i){
        tax(cars,i);
      }
      break;
    case 3:
      printf("You picked option 3, print the results to both the screen and file.\n");
      for (i = 0; i < 6; ++i){
        tax(cars,i);
      }
      break;
    default:
      printf("You have made an illegal choice.\n");
      user_menu();
  }
}
int tax(car_type cars[],int i) {
  if(cars[i].year > 2012){
    if(cars[i].engine <= 1.6){
      cars[i].tax = 150;
    }
    else{
      cars[i].tax = 300;
    }
  }
  else{
    if(cars[i].engine < 1.4){
      cars[i].tax = 200;
    }
    else if(cars[i].engine > 1.6){
      cars[i].tax = 600;
    }
    else{
      cars[i].tax = 400;
    }
  }
  return cars[i].tax;
}
