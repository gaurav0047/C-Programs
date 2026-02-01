#include <stdio.h>
#include <stdbool.h>

/* Operator Precedence and Evaluation Demo */

int main()
{
  int x = 2, y = 3, z = 2;
  int ans1, ans2;

  ans1 = z - (x + z) % 2 + 4;

  printf("ans1 = %d \n", ans1);

  ans2 = y++ + z-- + x++;

  printf("x = %d \t y = %d \t z = %d \t ans2 = %d \n", x, y, z, ans2);

  return 0;
}