#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Previous Char   : %c (ASCII %d)\n", ch - 1, ch - 1);
    printf("Next Char       : %c (ASCII %d)\n", ch + 1, ch + 1);

    return 0;
}
