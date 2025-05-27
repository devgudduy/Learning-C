// 5. Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>

int main()
{
  char c = 'h';
  printf("The character is %c\n", c);
  printf("The value of character is %d\n", c);
  if (c >= 'a' && c <= 'z') // (c >= 97 && c <= 122)
  // ASCII values: 'a' = 97, 'z' = 122
  {
    printf("%c is a lowercase character\n", c);
  }
  else
  {
    printf("%c is not a lowercase character\n", c);
  }
  return 0;
}