#include <stdio.h>

int main()
{
  for (int i = 0; i < 15; i++)
  {
    if (i == 5)
    {
      // break; // exit the loop
      continue; // skip the loop iteration
    }
    printf("%d\n", i);
  }
  printf("for loop is done!!");
  return 0;
}

/*
#include <stdio.h>

int main()
{
  int a = 2;
  for (a; a <= 50; a++)
  {
    if (a % 5 == 0)
    {
      continue;
    }
    printf("Value of a is : %d\n", a);
  }
  return 0;
}
*/