#include <stdio.h>

int main(void) {
    int amount;
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10];
    int i;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 10; i++) {
        count[i] = amount / notes[i];
        amount = amount % notes[i];

        if (count[i] > 0) {
            printf("\nTotal notes of %d are %d", notes[i], count[i]);
        }
    }

    return 0;
}

