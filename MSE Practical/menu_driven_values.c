#include <stdio.h>

int main() {
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Decimal\n");
        printf("2. Octal\n");
        printf("3. Hexadecimal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Decimal = %d\n", n);
                break;

            case 2:
                printf("Octal = %o\n", n);
                break;

            case 3:
                printf("Hexadecimal = %X\n", n);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
