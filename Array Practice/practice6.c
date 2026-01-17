#include <stdio.h>
int main(void)
{
  int n, i, j, sum = 0;

  printf("Enter the order of matrix:");
  scanf("%d", &n);

  int arr[n][n], args[n][n];

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      printf("\nEnter elements first matrix at arr[%d][%d]::", i, j);
      scanf("%d", &arr[i][j]);
    }

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      printf("\nEnter elements of second matrix at args[%d][%d]::", i, j);
      scanf("%d", &args[i][j]);
    }

  printf("Addition:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      printf("%d ", arr[i][j] + args[i][j]);
    printf("\n");
  }
  return 0;
}