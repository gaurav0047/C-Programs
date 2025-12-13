#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, choice;
    long square, cube;
    int absVal;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Square\n");
        printf("2. Cube\n");
        printf("3. Absolute Value\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            square = (long)num * num;
            printf("Square = %ld\n", square);
        }
        else if (choice == 2) {
            cube = (long)num * num * num;
            printf("Cube = %ld\n", cube);
        }
        else if (choice == 3) {
            if (num < 0)
                absVal = -num;
            else
                absVal = num;
            printf("Absolute Value = %d\n", absVal);
        }
        else if (choice == 4)
            exit(0);
        else
            printf("Invalid choice\n");
    }

    return 0;
}
