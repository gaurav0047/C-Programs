#include <stdio.h>

int main(void) {
    int amount, i, note, count;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (i = 1; i <= 10; i++) {
        switch (i) {
            case 1: note = 1000; break;
            case 2: note = 500;  break;
            case 3: note = 200;  break;
            case 4: note = 100;  break;
            case 5: note = 50;   break;
            case 6: note = 20;   break;
            case 7: note = 10;   break;
            case 8: note = 5;    break;
            case 9: note = 2;    break;
            case 10: note = 1;   break;
        }

        if (amount >= note) {
            count = amount / note;
            amount = amount % note;
            printf("\nTotal notes of %d are %d", note, count);
        }
    }

    return 0;
}

