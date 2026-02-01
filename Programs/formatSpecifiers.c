#include <stdio.h>

int main() {
    int a = 25;
    unsigned int b = 25;
    float c = 3.14159;
    double d = 12345.6789;
    char e = 'A';
    char str[] = "Hello";
    long int f = 123456789L;
    long long int g = 123456789012345LL;
    long double h = 3.141592653589793238L;
    int *ptr = &a;

    // %d - Signed decimal integer
    printf("%%d -> %d\n", a);

    // %i - Signed integer (same as %d)
    printf("%%i -> %i\n", a);

    // %u - Unsigned decimal integer
    printf("%%u -> %u\n", b);

    // %f - Float in decimal notation
    printf("%%f -> %f\n", c);

    // %.2f - Float with 2 decimal precision
    printf("%%.2f -> %.2f\n", c);

    // %e - Scientific notation (lowercase e)
    printf("%%e -> %e\n", d);

    // %E - Scientific notation (uppercase E)
    printf("%%E -> %E\n", d);

    // %g - Shorter of %e or %f
    printf("%%g -> %g\n", c);

    // %G - Shorter of %E or %f
    printf("%%G -> %G\n", c);

    // %c - Single character
    printf("%%c -> %c\n", e);

    // %s - String
    printf("%%s -> %s\n", str);

    // %p - Pointer address
    printf("%%p -> %p\n", ptr);

    // %o - Octal representation
    printf("%%o -> %o\n", a);

    // %x - Hexadecimal (lowercase)
    printf("%%x -> %x\n", a);

    // %X - Hexadecimal (uppercase)
    printf("%%X -> %X\n", a);

    // %% - Prints a percent symbol
    printf("%%%% -> %%\n");

    // %ld - Long integer
    printf("%%ld -> %ld\n", f);

    // %lld - Long long integer
    printf("%%lld -> %lld\n", g);

    // %Lf - Long double (note: needs 'L' suffix for literals)
    printf("%%Lf -> %Lf\n", h);

    // %5d - Minimum width of 5 (right aligned)
    printf("%%5d -> %5d\n", a);

    // %-5d - Left aligned within 5 spaces
    printf("%%-5d -> %-5d (left aligned)\n", a);

    return 0;
}
