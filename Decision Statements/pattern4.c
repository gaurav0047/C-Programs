#include <stdio.h>

int main()
{
  int row, i, j, num;

  printf("Enter the number of rows:");
  scanf("%d", &row);

  for (i = 1; i <= row; i++)
  {
    num = i;
    for (j = 1; j <= 5; j++)
    {
      printf("%d", num);
      num++;
    }
    printf("\n");
  }

  return 0;
}
