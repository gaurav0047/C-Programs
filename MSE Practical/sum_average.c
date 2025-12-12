#include <stdio.h>

int main() {
    int n, count = 0;
    float sum = 0, avg;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        sum = sum + n;
        count++;
    }

    if (count == 0)
        printf("No numbers entered\n");
    else {
        avg = sum / count;
        printf("Sum = %.2f\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
