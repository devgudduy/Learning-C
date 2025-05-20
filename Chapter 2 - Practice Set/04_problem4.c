#include <stdio.h>

int main()
{
  // Explain step by step evaluation of 3*x/y - z+k, where x=2, y=3, z=3, k=1
  int x = 2, y = 3, z = 3, k = 1;
  // Step 1: Evaluate 3*x
  // 3 * 2 = 6
  // Step 2: Evaluate 6/y
  // 6 / 3 = 2
  // Step 3: Evaluate 2 - z
  // 2 - 3 = -1
  // Step 4: Evaluate -1 + k
  // -1 + 1 = 0
  // Final result: 0
  printf("The value of 3*x/y - z + k is %d\n", 3 * x / y - z + k);
  // The value of 3*x/y - z + k is 0
  return 0;
}