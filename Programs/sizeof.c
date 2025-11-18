#include <stdio.h>
int main(void)
{
  int num = 10;
  printf("Memory space required for int = %d bytes \n", sizeof(int));
  printf("Memory space required for int = %d bytes \n", sizeof(num));
  printf("Memory space required for int = %d bytes \n", sizeof(10));

  char ch = 'a';
  printf("Memory space required for char = %d bytes \n", sizeof(ch));
  printf("Memory space required for int = %d bytes \n", sizeof(char));
  printf("Memory space required for int = %d bytes \n", sizeof('a'));
  return 0;
}