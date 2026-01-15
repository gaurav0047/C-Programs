#include <stdio.h>

int main()
{
    int n, i, j, k;
    int A[10][10], B[10][10], C[10][10];
    int sum = 0, prod = 1;
    int max, min;
    int det;
    float inv[10][10];

    printf("Enter order of square matrix : ");
    scanf("%d", &n);

    /* Accept Matrix A */
    printf("\nEnter elements of Matrix A\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    /* Accept Matrix B */
    printf("\nEnter elements of Matrix B\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    /* Print Matrices */
    printf("\nMatrix A:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    /* Addition */
    printf("\nAddition of Matrices:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    /* Subtraction */
    printf("\nSubtraction of Matrices:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    /* Multiplication */
    printf("\nMultiplication of Matrices:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    /* Identity Matrix Check */
    int identity = 1;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0))
                identity = 0;

    if (identity)
        printf("\nMatrix A is Identity Matrix");
    else
        printf("\nMatrix A is NOT Identity Matrix");

    /* Symmetric Matrix Check */
    int symmetric = 1;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] != A[j][i])
                symmetric = 0;

    if (symmetric)
        printf("\nMatrix A is Symmetric");
    else
        printf("\nMatrix A is NOT Symmetric");

    /* Sparse Matrix Check */
    int zero = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] == 0)
                zero++;

    if (zero > (n * n) / 2)
        printf("\nMatrix A is Sparse");
    else
        printf("\nMatrix A is NOT Sparse");

    /* Sum and Product of all elements */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            sum += A[i][j];
            prod *= A[i][j];
        }

    printf("\nSum of all elements = %d", sum);
    printf("\nProduct of all elements = %d", prod);

    /* Row-wise Sum */
    printf("\nRow-wise sum:\n");
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
            sum += A[i][j];
        printf("Row %d = %d\n", i + 1, sum);
    }

    /* Column-wise Sum */
    printf("\nColumn-wise sum:\n");
    for (j = 0; j < n; j++)
    {
        sum = 0;
        for (i = 0; i < n; i++)
            sum += A[i][j];
        printf("Column %d = %d\n", j + 1, sum);
    }

    /* Max and Min */
    max = min = A[0][0];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (A[i][j] > max) max = A[i][j];
            if (A[i][j] < min) min = A[i][j];
        }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    /* Odd and Even Elements */
    printf("\nEven elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] % 2 == 0)
                printf("%d ", A[i][j]);

    printf("\nOdd elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] % 2 != 0)
                printf("%d ", A[i][j]);

    /* Determinant (2x2 only) */
    if (n == 2)
    {
        det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
        printf("\nDeterminant = %d", det);

        if (det != 0)
        {
            inv[0][0] =  A[1][1] / (float)det;
            inv[0][1] = -A[0][1] / (float)det;
            inv[1][0] = -A[1][0] / (float)det;
            inv[1][1] =  A[0][0] / (float)det;

            printf("\nInverse Matrix:\n");
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    printf("%.2f ", inv[i][j]);
                printf("\n");
            }
        }
        else
            printf("\nInverse not possible");
    }

    return 0;
}
