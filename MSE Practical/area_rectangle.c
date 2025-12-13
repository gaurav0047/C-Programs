#include <stdio.h>

int main() {
    float length, width, area;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    if (length <= 0 || width <= 0)
        printf("Invalid input! Length and width must be positive.\n");
    else {
        area = length * width;
        printf("Area of rectangle = %.2f\n", area);
    }

    return 0;
}
