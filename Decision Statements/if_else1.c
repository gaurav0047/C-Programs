#include <stdio.h>
int main(void)
{
  int num = 10;
  printf("Start\n");

  if (num == 10)
  {
    printf("TRUE\n");
    printf("num is equal to 10\n");
  }
  else
    printf("Nope. num is not equal to 10\n");

  printf("End\n");

  return 0;
}