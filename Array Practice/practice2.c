#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    int a[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter elements at [%d][%d]::", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n         ::MATRIX::\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n\n");
    }
    printf("Transpose Matrix:\n");
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
            printf("%d \t", a[i][j]);
        printf("\n");
    }
    return 0;
}
