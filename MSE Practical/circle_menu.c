#include <stdio.h>

int main() {
    float r;
    int choice;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    if (r <= 0)
        printf("Invalid radius\n");
    else {
        do {
            printf("\n----- MENU -----\n");
            printf("1. Diameter\n");
            printf("2. Circumference\n");
            printf("3. Area\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Diameter = %.2f\n", 2 * r);
                    break;

                case 2:
                    printf("Circumference = %.2f\n", 2 * 3.14 * r);
                    break;

                case 3:
                    printf("Area = %.2f\n", 3.14 * r * r);
                    break;

                case 4:
                    printf("Exiting...\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }

        } while (choice != 4);
    }

    return 0;
}
