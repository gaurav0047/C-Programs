#include <stdio.h>

int main() {
    // \n : Newline - moves the cursor to the next line
    printf("Hello World!\\n -> Hello World!\nThis is a new line.\n\n");

    // \t : Horizontal tab - adds a tab space
    printf("\\t -> Hello\tWorld!\n\n");

    // \\ : Backslash - prints a single backslash
    printf("\\\\ -> This is a backslash: \\\n\n");

    // \" : Double quote - prints a double quotation mark
    printf("\\\" -> This prints double quotes: \"Hello\"\n\n");

    // \' : Single quote - prints a single quotation mark
    printf("\\\' -> This prints single quotes: \'A\'\n\n");

    // \a : Alert (beep) - triggers a beep sound (may not work on all systems)
    printf("\\a -> This will trigger a beep sound (if supported).\a\n\n");

    // \b : Backspace - moves the cursor one position back
    printf("\\b -> Hello\bWorld (removes 'o')\n\n");

    // \r : Carriage return - moves the cursor to the beginning of the line
    printf("\\r -> Hello World\rHey\n\n");

    // \f : Form feed - advances the paper feed (rarely visible on screens)
    printf("\\f -> Hello\fWorld (form feed)\n\n");

    // \v : Vertical tab - moves the cursor to the next vertical tab stop
    printf("\\v -> Hello\vWorld (vertical tab)\n\n");

    // \0 : Null character - terminates a string
    printf("\\0 -> Null character marks the end of a string.\n");
    char str[] = "Hello\0World";
    printf("Printing string with \\0: %s\n", str); // Only "Hello" will be printed

    return 0;
}
