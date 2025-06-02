// 8. repeat the previous program to calculate the factorial of a number using while loop
#include <stdio.h>

int main()
{
  int factorial = 1;
  int n;
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &n);
  int i = 1;
  while (i <= n)
  {
    factorial *= i;
    i++;
  }
  printf("The factorial of %d is %d\n", n, factorial);
  return 0;
}