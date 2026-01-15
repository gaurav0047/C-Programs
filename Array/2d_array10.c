#include <stdio.h>
int main()
{
  int order, i, j;
  printf("Enter order of square matrix ? : ");
  scanf("%d", &order);

  int A[order][order], B[order][order];
  printf("\nEnter the elements of %dx%d matrix 'A' \n", order, order);

  for (i = 0; i < order; ++i)
  {
    for (j = 0; j < order; ++j)
    {
      printf("\nEnter element at arr[%d][%d]::", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  system("pause");
  printf("\n\nEnter the elements of %dx%d matrix 'B' \n", order, order);

  for (i = 0; i < order; ++i)
  {
    for (j = 0; j < order; ++j)
    {
      printf("\nEnter element at B[%d][%d]::", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  // Print Matrix A
  printf("\nMatrix A:\n");
  for (i = 0; i < order; i++)
  {
    for (j = 0; j < order; j++)
      printf("%d\t", A[i][j]);
    printf("\n");
  }

  // Print Matrix B
  printf("\nMatrix B:\n");
  for (i = 0; i < order; i++)
  {
    for (j = 0; j < order; j++)
      printf("%d\t", B[i][j]);
    printf("\n");
  }

  return 0;
}