#include <stdio.h>
// Printing the values in Descending order
int main(void)
{
  int cnt = 10;
  while (cnt >= 1)
  {
    printf("Hello World -- %d\n", cnt);
    cnt = cnt - 1; //--cnt; // cnt--; // cnt -= 1;
  }

  return 0;
}
