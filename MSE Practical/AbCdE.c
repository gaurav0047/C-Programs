#include <stdio.h>

int main() {
    char ch = 'A';
    int i = 0;

    while (ch <= 'Z') {
        if (i % 2 == 0)
            printf("%c ", ch);        // Uppercase for even positions
        else
            printf("%c ", ch + 32);   // Lowercase for odd positions

        ch++;
        i++;
    }

    return 0;
}
