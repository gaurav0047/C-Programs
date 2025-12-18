// Program to accept elements of 2-D Array

#include <stdio.h>
int main()
{
  int rows, cols, i, j;
  printf("How many rows ? : ");
  scanf("%d", &rows);
  printf("\nHow many cols ? : ");
  scanf("%d", &cols);

  int arr[rows][cols];
  printf("\nEnter the elements of %dx%d matrix \n", rows, cols);

  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      printf("\nEnter element at arr[%d][%d]::", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n         ::MATRIX::\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      printf("%d \t", arr[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}