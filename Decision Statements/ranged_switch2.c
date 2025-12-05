#include <stdio.h>
#include <stdlib.h>
// Ranged switch statement
int main()
{
  printf("START\n");

  //	char ch = '$';
  char ch = 'Q';

  printf("Enter a character:");
  scanf("%c", &ch);

  switch (ch)
  {
  case 'a' ... 'z':
    printf("%c is Lower Case Letter.\n", ch);
    break;
  case 'A' ... 'Z':
    printf("%c is Upper Case Letter.\n", ch);
    break;
  default:
    printf("%c is NOT AN ALPHABET\n\n", ch);
  }

  printf("END\n");
  return 0;
}