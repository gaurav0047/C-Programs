#include <stdio.h>

int main()
{
  char upper = 'A';
  char lower = 'a';

  do
  {
    printf("%c%c", upper, lower);
    upper++;
    lower++;
  } while (upper <= 'Z');

  return 0;
}
/*
Logic 2
#include <stdio.h>

int main() {
    char ch = 'A';

    do {
        printf("%c%c", ch, ch + 32);  // +32 converts uppercase to lowercase in ASCII
        ch++;
    } while (ch <= 'Z');

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("%c%c", 65 + i, 97 + i);  // 65 = 'A', 97 = 'a'
        i++;
    } while (i < 26);

    return 0;
}
*/