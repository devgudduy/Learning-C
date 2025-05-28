#include <stdio.h>

int main()
{
  int i = 5;
  printf("The value of i is %d\n", i); // 5
  i = i + 5;
  printf("The value of i is %d\n", i); // 10
  i++;
  printf("The value of i is %d\n", i); // 11
  ++i;
  printf("The value of i is %d\n", i); // 12
  i--;
  return 0;
}
