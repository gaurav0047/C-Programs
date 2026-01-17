#include <stdio.h>
int main(void)
{
  int n, i, j, flag;

  printf("Enter the order of matrix:");
  scanf("%d", &n);

  int arr[n][n];

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      printf("\nEnter elements at [%d][%d]::", i, j);
      scanf("%d", &arr[i][j]);
    }

  printf("\n         ::MATRIX::\n");
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      printf("%d \t", arr[i][j]);
    }
    printf("\n\n");
  }

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0))
        flag = 0;

  if (flag)
    printf("Identity Matrix");
  else
    printf("Not Identity Matrix");

  return 0;
}