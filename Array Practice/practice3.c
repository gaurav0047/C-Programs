#include <stdio.h>
int main()
{
  int n, i, j;
  printf("Enter order: ");
  scanf("%d", &n);

  int a[n][n];

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      printf("\nEnter elements at [%d][%d]::", i, j);
      scanf("%d", &a[i][j]);
    }

  printf("\n         ::MATRIX::\n");
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      printf("%d \t", a[i][j]);
    }
    printf("\n\n");
  }

  printf("Upper Triangle:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      printf(i <= j ? "%d \t" : "0 \t", a[i][j]);
    printf("\n");
  }

  printf("Lower Triangle:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      printf(i >= j ? "%d \t" : "0 \t", a[i][j]);
    printf("\n");
  }
  return 0;
}
