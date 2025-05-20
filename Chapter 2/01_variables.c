#include <stdio.h>

int main()
{
  int i = 10;
  int j = i;
  // %d is called format specifier
  // %d is for integer, %f is for float, %c is for character and %s is for string
  printf("The value of i is %d and j is %d\n", i, j);
  int a = 5, b = 6, c = 7, d = 8;
  printf("The value of a is %d\n", a);
  printf("The value of b is %d\n", b);
  printf("The value of c is %d\n", c);
  printf("The value of d is %d\n", d);
  return 0;
}