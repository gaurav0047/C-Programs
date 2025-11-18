// Accept 2 numbers from user and swap their values

#include <stdio.h>
int main(void)
{
  int a, b;

  printf("Enter the two numbers::");
  scanf("%i %i", &a, &b);
  printf("\nBefore swapping::%d %d", a, b);

  // Using third variable
  int c;
  c = a;
  a = b;
  b = c;
  printf("\nAfter swapping::%d %d", a, b);

  // Without using third variable
  a = a + b;
  b = a - b;
  a = a - b;
  printf("\nAfter swapping::%d %d", a, b);
  
  // Using bitwise operator
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("\nAfter swapping::%d %d", a, b);

  return 0;
}