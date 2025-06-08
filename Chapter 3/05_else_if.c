#include <stdio.h>



int main()
{
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  // Check if the user is eligible to drive
  if (age > 60)
  {
    printf("You can drive and you're a senior citizen.\n");
  }
  else if (age > 18)
  {
    printf("You can drive but you're not a senior citizen.\n");
  }
  else
  {
    printf("You can't drive.\n");
  }
  return 0;
}
