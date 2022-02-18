/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1,mark2,total;
  float avg;
  printf("Enter Subject 1 Mark=");
  scanf("%d",&mark1);
  printf("Enter Subject 2 Mark=");
  scanf("%d",&mark2);
  total=mark1+mark2;
  avg=total/2.0;
  printf("Average=%.2f",avg);
  
  return 0;
}

