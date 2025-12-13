#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter value of N: ");
    scanf("%d", &n);

    if (n < 2)
        printf("No prime numbers\n");
    else
        for (i = 2; i <= n; ++i) {
            count = 0;

            for (j = 1; j <= i; ++j)
                if (i / j * j == i)
                    ++count;

            if (count == 2)
                printf("%d ", i);
        }

    return 0;
}
