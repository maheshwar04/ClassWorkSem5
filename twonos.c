#include <stdio.h>

int main() {
  int a, b;
  printf("Enter the first number:");
  scanf("%d", & a);
  printf("Enter the second number:");
  scanf("%d", & b);
  char str[30];
  sprintf(str, "%dx2+%dx", a, b);
  
  printf("

  return 0;
}

//write a program in c to get user date of birth dd-mm-yyyy from console then convert the following into string like if enered 01 then january now this string will be passed to a function named p_cal that takes a string as an input and this p_cal is going to calculate the age of the user if the age is < 30 then premium is 10k if the age is >50 then user has to pay 30k or else if it is between 30 and 50 user has to pay 20k premium and then print the premium and age for the user. use sscanf and sprintf
