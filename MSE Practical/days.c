#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1 to 7): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("SUNDAY\n"); break;
        case 2: printf("MONDAY\n"); break;
        case 3: printf("TUESDAY\n"); break;
        case 4: printf("WEDNESDAY\n"); break;
        case 5: printf("THURSDAY\n"); break;
        case 6: printf("FRIDAY\n"); break;
        case 7: printf("SATURDAY\n"); break;
        default: printf("Invalid input\n");
    }

    return 0;
}
