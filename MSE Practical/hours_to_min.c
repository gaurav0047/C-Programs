#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if (hours < 0 || minutes < 0)
        printf("Invalid input\n");
    else {
        totalMinutes = hours * 60 + minutes;
        printf("Total: %d minutes\n", totalMinutes);
    }

    return 0;
}
