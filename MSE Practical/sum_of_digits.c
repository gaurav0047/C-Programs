#include <stdio.h>

int main() {
    int n, temp, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        rem = temp % 10;   // Get last digit
        sum = sum + rem;   // Add digit to sum
        temp = temp / 10;  // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
