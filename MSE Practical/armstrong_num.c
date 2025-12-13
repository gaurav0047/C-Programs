#include <stdio.h>

int main() {
    int num, temp, d1, d2, d3, sum;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999)
        printf("Invalid input (Not a three digit number)\n");
    else {
        temp = num;

        d3 = temp % 10;
        temp = temp / 10;

        d2 = temp % 10;
        temp = temp / 10;

        d1 = temp;

        sum = d1*d1*d1 + d2*d2*d2 + d3*d3*d3;

        if (sum == num)
            printf("Armstrong Number\n");
        else
            printf("Not an Armstrong Number\n");
    }

    return 0;
}
