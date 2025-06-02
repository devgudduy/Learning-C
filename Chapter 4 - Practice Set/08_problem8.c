// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()
{
  int factorial = 1;
  int n;
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }
  printf("The factorial of %d is %d\n", n, factorial);
  return 0;
}