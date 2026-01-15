#include <stdio.h>

int main()
{
  int rows, cols, i, j, n;

TEST:
  printf("\n\nHow many rows ? : ");
  scanf("%d", &rows);
  printf("\nHow many cols ? : ");
  scanf("%d", &cols);

  if (rows != cols)
  {
    printf("\nFor square matrix, we require same value for rows and columns ");
    goto TEST;
  }

  int arr[rows][cols];

  printf("\nEnter the elements of %dx%d matrix \n", rows, cols);

  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      printf("\nEnter element at arr[%d][%d]:: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("\nMATRIX\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      printf("%d \t", arr[i][j]);
    }
    printf("\n");
  }

  // Printing Upper Right Triangle
  printf("\nUPPER RIGHT TRIANGLE OF MATRIX\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      if (j >= i)
        printf("%d \t", arr[i][j]);
      else
        printf("0 \t");
    }
    printf("\n");
  }

  // Printing Upper Left Triangle
  printf("\nUPPER LEFT TRIANGLE OF MATRIX\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      if (i + j <= rows - 1)
        printf("%d \t", arr[i][j]);
      else
        printf("0 \t");
    }
    printf("\n");
  }

  // Printing Lower Right Triangle
  printf("\nLOWER RIGHT TRIANGLE  OF MATRIX\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      if (i + j >= rows - 1)
        printf("%d \t", arr[i][j]);
      else
        printf("0 \t");
    }
    printf("\n");
  }

  // Printing Lower Left Triangle
  printf("\nLOWER LEFT TRIANGLE OF MATRIX\n");
  for (i = 0; i < rows; ++i)
  {
    for (j = 0; j < cols; ++j)
    {
      if (i >= j)
        printf("%d \t", arr[i][j]);
      else
        printf("0 \t");
    }
    printf("\n");
  }
  return 0;
}