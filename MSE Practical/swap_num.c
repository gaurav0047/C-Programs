#include <stdio.h>

int main() {
    int a, b, temp, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Swap using third variable\n");
    printf("2. Swap without using third variable\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        temp = a;
        a = b;
        b = temp;
        printf("After swapping: a = %d, b = %d\n", a, b);
    }
    else if (choice == 2) {
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swapping: a = %d, b = %d\n", a, b);
    }
    else
        printf("Invalid choice\n");

    return 0;
}
