#include <stdio.h>
#include <stdlib.h>
// Ranged switch statement
int main()
{
  printf("START\n");

  int num = 565;
  switch (num)
  {
  case 0 ... 9:
    printf("Single Digit No.\n");
    break;
  case 10 ... 99:
    printf("Two Digit No.\n");
    break;
  case 100 ... 999:
    printf("Three Digit No.\n");
    break;
  case 1000 ... 9999:
    printf("Four Digit No.\n");
    break;
  }

  printf("END\n");
  return 0;
}