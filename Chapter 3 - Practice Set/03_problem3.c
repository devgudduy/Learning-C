#include <stdio.h>

int main()
{
  int income;
  float tax;
  printf("Welcome to the Income Tax Calculator\n");
  printf("Enter your income: ");
  scanf("%d", &income);

  if (income <= 250000)
  {
    tax = 0;
  }
  else if (income > 250000 && income <= 500000)
  {
    tax = (income - 250000) * 0.05;
  }
  else if (income > 500000 && income <= 1000000)
  {
    tax = (income - 500000) * 0.1 + (income - 250000) * 0.05;
  }
  else
  {
    tax = (income - 1000000) * 0.3 + (income - 500000) * 0.1 + (income - 250000) * 0.05;
  };
  printf("Your income tax is: %.2f\n", tax);
  printf("Thank you for using the Income Tax Calculator!\n");

  return 0;
}