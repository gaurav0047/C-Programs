#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (rev == n)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
