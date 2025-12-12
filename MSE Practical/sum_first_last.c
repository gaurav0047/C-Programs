#include <stdio.h>

int main() {
    int n, temp, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;  // Handle negative numbers

    temp = n;
    last = temp % 10;    // Get last digit

    while (temp >= 10)
        temp = temp / 10;  // Reduce number to first digit

    first = temp;
    sum = first + last;

    printf("Sum of first and last digits = %d\n", sum);

    return 0;
}
