#include <stdio.h>
// break as a jump statement

int main(void)
{
  int cnt = 1;
  while (cnt <= 10)
  {
    printf("Hello World - %d \n", cnt);
    if (cnt == 5)
      break;

    ++cnt;
  }
  return 0;
}