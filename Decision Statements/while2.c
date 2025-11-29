#include <stdio.h>
int main(void)
{
  int cnt = 1;
  while (cnt <= 10)
  {
    printf("Hello World -- %d\n", cnt);
    //		cnt = cnt + 3;
    cnt = cnt + 2;
  }

  return 0;
}
