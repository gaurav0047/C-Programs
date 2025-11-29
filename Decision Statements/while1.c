#include <stdio.h>
// Program to explain working of while loop

int main(void)
{
  int cnt = 1;
  while (cnt <= 10)
  {
    printf("Hello World -- %d\n", cnt);
    // cnt = cnt + 1;
    ++cnt; // cnt++; // cnt += 1;
  }

  return 0;
}
