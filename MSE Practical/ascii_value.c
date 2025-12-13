#include <stdio.h>

int main() {
    int n;

    printf("Enter a number (0 to 127): ");
    scanf("%d", &n);

    if (n < 0 || n > 127)
        printf("Invalid ASCII value\n");
    else
        printf("ASCII Value: %d , Character: %c\n", n, n);

    return 0;
}
