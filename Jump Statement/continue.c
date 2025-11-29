#include <stdio.h>
// continue as a jump statement
int main(void)
{
  int cnt = 0;
  while (cnt < 10)
  {
    ++cnt;
    if (cnt == 5)
      continue;
    printf("Hello World - %d \n", cnt);
  }
  return 0;
}