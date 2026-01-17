#include <stdio.h>
int main()
{
  int n, i, j, flag = 1;
  printf("Enter order of matrix: ");
  scanf("%d", &n);

  int a[n][n];

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      printf("\nEnter elements at [%d][%d]::", i, j);
      scanf("%d", &a[i][j]);
    }

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (a[i][j] != a[j][i])
        flag = 0;

  if (flag)
    printf("Matrix is Symmetric");
  else
    printf("Matrix is NOT Symmetric");

  return 0;
}
