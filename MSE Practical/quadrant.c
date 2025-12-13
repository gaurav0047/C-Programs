#include <stdio.h>

int main() {
    int x, y;

    printf("Enter X coordinate: ");
    scanf("%d", &x);

    printf("Enter Y coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("Point lies in First Quadrant\n");
    else if (x < 0 && y > 0)
        printf("Point lies in Second Quadrant\n");
    else if (x < 0 && y < 0)
        printf("Point lies in Third Quadrant\n");
    else if (x > 0 && y < 0)
        printf("Point lies in Fourth Quadrant\n");
    else if (x == 0 && y == 0)
        printf("Point lies at Origin\n");
    else if (x == 0)
        printf("Point lies on Y-axis\n");
    else
        printf("Point lies on X-axis\n");

    return 0;
}
