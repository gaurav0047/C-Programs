#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    if (base <= 0 || height <= 0)
        printf("Invalid input! Base and height must be positive.\n");
    else {
        area = 0.5 * base * height;
        printf("Area of triangle = %.2f\n", area);
    }

    return 0;
}
