#include <stdio.h>

int main()
{
  int a = 40;
  float b = 3.5;

  a = (int)b; // Typecasting float to int
  printf("The value of a is %d\n", a);
  return 0;
}