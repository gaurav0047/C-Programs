#include <stdio.h>
#include <stdbool.h>

/* Arithmetic Operators */

int main()
{
  char a = 10, b = 3, c = 0;

  // For Division operator
  printf("a/b = %d \n", a / b);
  printf("-a/b = %d \n", -a / b);
  printf("a/-b = %d \n", a / -b);
  printf("-a/-b = %d \n", -a / -b);

  // For Modulus operator
  printf("a%%b = %d \n", a % b);
  printf("-a%%b = %d \n", -a % b);
  printf("a%%-b = %d \n", a % -b);
  printf("-a%%-b = %d \n", -a % -b);

  return 0;
}