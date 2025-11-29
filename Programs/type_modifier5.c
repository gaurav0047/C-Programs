#include <stdio.h>
#include <stdint.h>
// type modifier
int main()
{

  int8_t num = 25; // char  num  = 25;

  printf("Size required for variable num = %d bytes \n", sizeof(num));
  printf("Size required for int8_t type variable = %d bytes \n", sizeof(int8_t));

  return 0;
}