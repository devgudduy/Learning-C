#include <stdio.h>

int main()
{
  int radius;
  printf("Enter radius : ");
  scanf("%d", &radius);

  int height;
  printf("Enter height : ");
  scanf("%d", &height);
  
  float volume = 3.14 * radius * radius * height;
  float area = 3.14 * radius * radius;

  printf("The area of the circle with radius %d is : %f\n", radius, area);
  printf("The volume of the circle with radius %d and height %d is : %f\n", radius, height, volume);
  return 0;
}