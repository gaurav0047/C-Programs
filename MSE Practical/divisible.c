#include <stdio.h>

int main() {
    int i;

    printf("Numbers divisible by 7 and multiple of 5 between 1 and 1000:\n");

    for (i = 1; i <= 1000; ++i)
        if (i % 7 == 0 && i % 5 == 0)
            printf("%d ", i);

    return 0;
}
