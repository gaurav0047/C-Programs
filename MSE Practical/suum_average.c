#include <stdio.h>

int main() {
    int i, n;
    float sum = 0, avg;

    printf("Enter 5 numbers:\n");

    for (i = 1; i <= 5; ++i) {
        scanf("%d", &n);
        sum = sum + n;
    }

    avg = sum / 5;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
