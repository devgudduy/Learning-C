// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
#include <stdio.h>

int main()
{
  // Using for loop
  // int sum_for = 0;
  // for (int i = 1; i <= 10; i++)
  // {
  //   sum_for += i;
  // }
  // printf("sum of first ten natural numbers using for loop is %d\n", sum_for);

  // Using do-while loop
  int i = 1, sum_do_while = 0;
  do
  {
    sum_do_while += i;
    i++;
  } while (i <= 10);

  printf("sum of first ten natural numbers using do-while loop is %d\n", sum_do_while);
  return 0;
}