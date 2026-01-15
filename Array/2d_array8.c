#include<stdio.h>

int main()
{	
	int rows, cols, i, j;

TEST:
	printf("\n\nHow many rows ? : ");
	scanf("%d", &rows);
	printf("\nHow many cols ? : ");
	scanf("%d", &cols);
	
	if(rows != cols)
	{
		printf("\nFor square matrix, we require same value for rows and columns ");
		goto TEST;
	}
	
	int arr[rows][cols];

	printf("\nEnter the elements of %dx%d matrix \n", rows, cols);
	system("pause");

	for(i = 0; i < rows; ++i)
	{
		for(j = 0; j < cols; ++j)
		{
			printf("\nEnter element at arr[%d][%d]:: ", i, j);
			scanf("%d", &arr[i][j]);
 		}
	}

	system("pause");

	printf("\nMATRIX\n");
	for(i = 0; i < rows; ++i)
	{
		for(j = 0; j < cols; ++j)
		{
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");

	// Printing transpose
	printf("\nTRANSPOSE OF MATRIX\n");
	for(i = 0; i < rows; ++i)
	{
		for(j = 0; j < cols; ++j)
		{
			printf("%d \t", arr[j][i]);
		}
		printf("\n");
	}

    return 0;
}
