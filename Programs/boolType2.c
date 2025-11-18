#include <stdio.h>
#include <stdbool.h>

// Bool in an expression

int main()
{
  int m = 5;

  bool b = true;

  int x = false + true + 6;

  int y = false + 5 * m - b;

  printf("value of x --> %d \n", x);

  printf("value of y --> %d \n", y);

  return 0;
}