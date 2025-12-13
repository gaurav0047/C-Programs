#include <stdio.h>

int main() {
    int minutes, hours, remMinutes;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if (minutes < 0)
        printf("Invalid input\n");
    else {
        hours = minutes / 60;
        remMinutes = minutes % 60;

        printf("%d Hours, %d Minutes\n", hours, remMinutes);
    }

    return 0;
}
