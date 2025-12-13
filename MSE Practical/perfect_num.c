#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter value of N: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Invalid input\n");
    else {
        printf("\nPerfect numbers between 1 to %d are: ", n);
        for (i = 1; i <= n; ++i) {
            sum = 0;

            for (j = 1; j <= i / 2; ++j)
                if (i % j == 0)
                    sum = sum + j;

            if (sum == i && i != 0)
                printf("%d ", i);
        }
    }

    return 0;
}
