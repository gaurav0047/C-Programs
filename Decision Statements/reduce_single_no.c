#include <stdio.h>

int main() {
    int num, sum, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 9) {  
        sum = 0;

        while(num > 0) {
            rem = num % 10;
            sum += rem;
            num /= 10;
        }

        num = sum;  // repeat with new number
    }

    printf("Single digit = %d", num);

    return 0;
}
