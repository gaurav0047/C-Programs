#include <stdio.h>
#include <limits.h>
// type modifier
int main()
{

  // int num = 25;
  // short int num = 25;
  short num = 25;

  printf("Size required for variable num = %d bytes \n", sizeof(num));
  printf("Size required for short type variable = %d bytes \n", sizeof(short));

  return 0;
}