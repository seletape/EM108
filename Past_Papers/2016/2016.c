#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct containing information about DVD listings.
typedef struct listings {
  char category[20];
  char movie_name[20];
  int year;
  float movie_price;
  char movie_code[10];
  int discount;
} listings_type;
listings_type listings[6];


//Struct containing merch
typedef struct merch {
  char merch_code[10];
  char merch_name[20];
  float merch_price;
} merch_type;

int option;
int i;

int main() {
  FILE *indata;
  indata = fopen("dvd.txt","r");

  for(i = 0; i < 6 ; ++i){
    fscanf(indata , "%s %s %d %f %s %d", listings[i].category, listings[i].movie_name, &listings[i].year, &listings[i].movie_price, listings[i].movie_code, &listings[i].discount);
  }
printf("Welcome to the DVD Shop\n");
printf("Here is a list of movies available\n", );

  for(i = 0; i < 5 ; ++i){
    printf( "%s %s %d %.2f %s %d\n", listings[i].category, listings[i].movie_name, listings[i].year, listings[i].movie_price, listings[i].movie_code, listings[i].discount);
  }

  printf("Please choose one of the options below:\n");
  printf("1.To print the results to the screen only, press 1\n");
  printf("2.To print the results to the file only, press 2\n");
  printf("3.To print the results to both the screen and file, press 3\n");
  scanf("%d", &option);

  return 0;
}
