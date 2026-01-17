#include <stdio.h>

int main()
{
  int i, j;

  for (i = 0; i < 21; i++)
  {
    for (j = 0; j < 21; j++)
    {
      if ((i == 0 && j >= 10) ||
          (j == 0 && i <= 10) ||
          (i == 10) ||
          (j == 10) ||
          (i == 20 && j <= 10) ||
          (j == 20 && i >= 10))
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}