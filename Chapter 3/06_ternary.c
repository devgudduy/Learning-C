#include <stdio.h>
// Ternary operator
// The ternary operator is a shorthand for an if-else statement.
// It takes three operands and is used to evaluate a condition.
// The syntax is: condition ? expression1 : expression2;
// If the condition is true, expression1 is executed; otherwise, expression2 is executed.
// Example: Check if a is greater than b
// If true, print "a is greater than b"; otherwise, print "b is greater than a".
// The ternary operator is often used for simple conditional assignments or expressions.
// It can make the code more concise and readable, but it should be used judiciously.

int main()
{
  int a = 25;
  int b = 30;
  a > b ? printf("a is greater than b\n") : printf("b is greater than a \n");
  return 0;
}