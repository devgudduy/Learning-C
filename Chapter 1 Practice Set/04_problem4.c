#include <stdio.h>

int main()
{
  float p = 6000;
  int t = 2;
  int r = 10;
  float si = (p * t * r) / 100;
  printf("The value of simple interest is : %f\n", si);
  printf("The value of total amount is : %f\n", p + si);
  return 0;
}