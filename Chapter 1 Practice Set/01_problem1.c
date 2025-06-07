#include <stdio.h>

int main()
{
  // int length = 3;
  // int width = 6;
  int length, width;
  printf("Enter length : ");
  scanf("%d", &length);

  printf("Enter width : ");
  scanf("%d", &width);
  
  int area = length * width;
  printf("The area of the rectangle is : %d\n", area);
  return 0;
}
