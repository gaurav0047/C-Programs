#include <stdio.h>

int main()
{
  int num, i, count;

  printf("Prime numbers between 1 to 1000 are:\n");

  for (num = 2; num <= 1000; num++)
  {
    count = 0;

    for (i = 2; i * i <= num; i++)
    {
      if (num % i == 0)
      {
        count = 1;
        break;
      }
    }

    if (count == 0)
      printf("%d ", num);
  }

  return 0;
}
