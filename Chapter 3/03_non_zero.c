#include <stdio.h>
int main()
{
  if (23)
  {
    printf("This if is executed\n");
  }
  if (34344)
  {
    printf("This if is also executed\n");
  }
  if (3.45)
  {
    printf("This if is also executed\n");
  }
  if (-1)
  {
    printf("This if is also executed\n");
  }
  if ('d')
  {
    printf("This character if is also executed\n");
  }
  if (0)
  {
    printf("This if is not executed\n");
  }
  return 0;
}
