/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  //create variables
  float x,y;
  //get input from user
  printf("enter marks 1 - ");
  scanf("%f",&x);
  
  printf("enter marks 2 - ");
  scanf("%f",&y);

  //cal avg
  float avg;
  avg=(x+y)/2.0;
  
  //print the average
  
  printf("average is :%.2f\n",avg);
return 0;
}
