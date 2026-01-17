#include <stdio.h>

int main(void)
{
  int c1, r1, c2, r2, i, j, k;

AGAIN:
  printf("Enter the column of first matrix::");
  scanf("%d", &c1);

  printf("Enter the rows of first matrix::");
  scanf("%d", &r1);

  printf("Enter the column of second matrix::");
  scanf("%d", &c2);

  printf("Enter the rows of second matrix::");
  scanf("%d", &r2);

  if (c1 != r2)
  {
    printf("\nMultiplication not possible.\nEnter valid rows and columns.\n\n");
    goto AGAIN;
  }

  int a[r1][c1], b[r2][c2], c[r1][c2];

  for (i = 0; i < r1; i++)
    for (j = 0; j < c1; j++)
    {
      printf("\nEnter elements of second matrix at a[%d][%d]::", i, j);
      scanf("%d", &a[i][j]);
    }

  for (i = 0; i < r2; i++)
    for (j = 0; j < c2; j++)
    {
      printf("\nEnter elements of second matrix at b[%d][%d]::", i, j);
      scanf("%d", &b[i][j]);
    }

  // Multiplication
  for (i = 0; i < r1; i++)
    for (j = 0; j < c2; j++)
    {
      c[i][j] = 0;
      for (k = 0; k < c1; k++)
        c[i][j] += a[i][k] * b[k][j];
    }

  printf("\nThe multiplication matrix ::\n");
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c2; j++)
      printf("%d ", c[i][j]);
    printf("\n");
  }

  return 0;
}
