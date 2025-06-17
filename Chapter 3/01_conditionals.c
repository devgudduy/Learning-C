#include <stdio.h>


int main()
{
  int age;
  printf("Enter your age : ");
  scanf("%d", &age);
  printf("Your age is : %d\n", age);
  if (age > 15)
  {
    printf("Age is greater than 15\n");
    printf("We are inside the if block\n");
  }
  if (age % 5 == 0)
  {
    printf("Age is divisible by 5\n");
    printf("We are inside the second if block\n");
  }
  
  return 0;
}
