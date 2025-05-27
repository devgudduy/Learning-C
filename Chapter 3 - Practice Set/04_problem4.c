#include <stdio.h>

int main()
{
  /*
  4. Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
  */
  printf("Enter your year: ");
  int year;
  scanf("%d", &year);
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
    printf("%d is a Leap Year\n", year);
  }
  else
  {
    printf("%d is not a Leap Year\n", year);
  }
  return 0;
}