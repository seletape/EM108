#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct containing all the information for the house
typedef struct house {
  int house_id;
  char name[20];
  int waste;
  int water;
  int surface_area;
  int tax;
} house_type;
house_type house[9];

int option;
int i;

void user_menu();
int tax(house_type house[],int i);
void choice();



int main() {
  FILE *indata;
  indata = fopen("input.txt","r");

  for (i = 0; i < 9; ++i) {
    fscanf(indata , "%d %s %d %d %d", &house[i].house_id, house[i].name, &house[i].waste, &house[i].water, &house[i].surface_area);

    }

  printf("Welcome to the House Tax Calculator.");
  user_menu();
  choice();

  return 0;
}

void user_menu() {
  printf("Please choose one of the options below:\n");
  printf("1.To print the results to the screen only, press 1\n");
  printf("2.To print the results to the file only, press 2\n");
  printf("3.To print the results to both the screen and file, press 3\n");
  scanf("%d", &option);
}

int tax(house_type house[], int i){
  if(house[i].surface_area >= 200){
    house[i].tax = (1 * house[i].surface_area) + (.5 * house[i].waste) + (3 * house[i].water);
  }
  else {
    house[i].tax = 100 + house[i].waste + house[i].water;
  }
  return house[i].tax;
}

void choice() {
  FILE* outdata;
  outdata = fopen("outdata.txt", "w");
  switch(option){
    case 1:
      printf("You picked option 1, print the results to the screen only.\n");
      printf( "The information is given in the order of: houseID, ownername, binwaste, waterused, surfacearea, tax\n");
      for (i = 0; i < 9; ++i){
        tax(house,i);
        printf( "%d \t %s \t %d \t %d \t %d \t %d \n", house[i].house_id, house[i].name, house[i].waste, house[i].water, house[i].surface_area, house[i].tax);
      }
      break;
    case 2:
      printf("You picked option 2, print the results to the file only.\n");
      fprintf(outdata, "The information is given in the order of: houseID, ownername, binwaste, waterused, surfacearea, tax\n");
      for (i = 0; i < 9; ++i){
        tax(house,i);
        fprintf(outdata, "%d \t\t %s \t %d \t %d \t %d \t %d \n", house[i].house_id, house[i].name, house[i].waste, house[i].water, house[i].surface_area, house[i].tax);
      }
      break;
    case 3:
      printf("You picked option 3, print the results to both the screen and file.\n");
      printf( "The information is given in the order of: houseID, ownername, binwaste, waterused, surfacearea, tax\n");
      fprintf(outdata, "The information is given in the order of: houseID, ownername, binwaste, waterused, surfacearea, tax\n");
      for (i = 0; i < 9; ++i){
        tax(house,i);
        printf( "%d \t %s \t %d \t %d \t %d \t %d \n", house[i].house_id, house[i].name, house[i].waste, house[i].water, house[i].surface_area, house[i].tax);
        fprintf(outdata, "%d \t\t %s \t %d \t %d \t %d \t %d \n", house[i].house_id, house[i].name, house[i].waste, house[i].water, house[i].surface_area, house[i].tax);
      }
      break;
    default:
      printf("You have made an illegal choice.\n");
      user_menu();
  }
  fclose(outdata);
}
