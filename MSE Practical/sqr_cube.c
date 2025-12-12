#include <stdio.h>

int main() {
    int n, square, cube, absVal;

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    cube = n * n * n;

    if (n < 0)
        absVal = -n;
    else
        absVal = n;

    printf("Square = %d\n", square);
    printf("Cube = %d\n", cube);
    printf("Absolute value = %d\n", absVal);

    return 0;
}