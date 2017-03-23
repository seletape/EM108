//Exercise 3: Projectile Problem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float h; //starting_height
float ux; // initial velocity in the x direction
float uy; // initial velocity in the y direction
float t; // time taken for the projectile to land
float r;// Range
float mh;// max height
float resultant;// used to calculate the square root in the minus b formula
int i;
float sy[100];// Heights in the y-axis of the projectile after time t
float sx[100];//Distance from origin in the x-axis of the projectile after time t

void input();// Asks the user for input for h,ux,uy
void totals();// Calculates total time, range and max height
void t_increment();//Calculates the x and y components of the projectile at time t



int main() {
  FILE *my_stream;
  my_stream = fopen("text.txt", "w");

  printf("Welcome to the Projectile Calculator\n");
  input();
  totals();
  t_increment();

  for(i = 0; i < t; ++i){
    fprintf(my_stream, "%.3f\t%.3f\n", sx[i], sy[i]);
  }

  return 0;
}

void input() {
  printf("What is the starting height of the projectile?\n Enter here: ");
  scanf("%f", &h);
  printf("\n");
  if(h < 0) {
    input();
  }

  printf("What is the intial velocity of the projectile in the x-direction?\n Enter here: ");
  scanf("%f", &ux);
  printf("\n");

  printf("What is the initial velocity of the projectile in the y-direction?\n Enter here: ");
  scanf("%f", &uy);
  printf("\n");
  if(uy < 0) {
    input();
  }
}


void totals() {
  //Total time
  resultant = ((uy)*(uy) - 4*.5*(-9.81)*(h));
  t = (-uy - (sqrt(resultant)))/(-9.81);
  printf("%.3f\n", t);

  //Range
  r = ux * t;
  printf("%.3f\n", r);


  //Max height
  mh = ((uy*uy)/19.62) + h;
  printf("%.3f\n", mh);

  }

  void t_increment() {
    // Y Heights
    for(i = 0; i < t; ++i){
      sy[i] = (uy*i) - (.5*9.81*(i*i)) + h;
      printf("The y component at %d seconds is %.3f\n", i, sy[i]);
    }

    //X Distances
    for(i = 0; i < t; ++i){
      sx[i] = ux * i;
      printf("The x component at %d seconds is %.3f\n", i, sx[i]);
    }
  }
