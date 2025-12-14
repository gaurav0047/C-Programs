#include <stdio.h>

int main(void) {
    int amount;
    int c1=0, c2=0, c3=0, c4=0, c5=0;
    int c6=0, c7=0, c8=0, c9=0, c10=0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 1000) {
        c1 = amount / 1000;
        amount %= 1000;
        printf("\nTotal notes of 1000 are %d", c1);
    }

    if (amount >= 500) {
        c2 = amount / 500;
        amount %= 500;
        printf("\nTotal notes of 500 are %d", c2);
    }

    if (amount >= 200) {
        c3 = amount / 200;
        amount %= 200;
        printf("\nTotal notes of 200 are %d", c3);
    }

    if (amount >= 100) {
        c4 = amount / 100;
        amount %= 100;
        printf("\nTotal notes of 100 are %d", c4);
    }

    if (amount >= 50) {
        c5 = amount / 50;
        amount %= 50;
        printf("\nTotal notes of 50 are %d", c5);
    }

    if (amount >= 20) {
        c6 = amount / 20;
        amount %= 20;
        printf("\nTotal notes of 20 are %d", c6);
    }

    if (amount >= 10) {
        c7 = amount / 10;
        amount %= 10;
        printf("\nTotal notes of 10 are %d", c7);
    }

    if (amount >= 5) {
        c8 = amount / 5;
        amount %= 5;
        printf("\nTotal notes of 5 are %d", c8);
    }

    if (amount >= 2) {
        c9 = amount / 2;
        amount %= 2;
        printf("\nTotal notes of 2 are %d", c9);
    }

    if (amount >= 1) {
        c10 = amount / 1;
        printf("\nTotal notes of 1 are %d", c10);
    }

    return 0;
}

