#include <stdio.h>
int main(void)
{
  int n, i, j, sum = 0;

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
    sum += arr[i][i];

  printf("Sum of diagonal = %d", sum);
  return 0;
}