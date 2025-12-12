#include <stdio.h>

int main() {
    int x, y, i;
    long long power = 1;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    if (y < 0)
        printf("Negative powers are not supported in this program\n");
    else {
        for (i = 1; i <= y; i++)
            power = power * x;

        printf("%d raised to %d = %lld\n", x, y, power);
    }

    return 0;
}
