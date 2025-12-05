#include <stdio.h>

int main()
{
  int bin, dec = 0, base = 1, rem;

  printf("Enter a binary number: ");
  scanf("%d", &bin);

  while (bin > 0)
  {
    rem = bin % 10;    // extract last digit
    dec += rem * base; // add to decimal
    base *= 2;         // next power of 2
    bin /= 10;         // remove last digit
  }

  printf("Decimal = %d", dec);

  return 0;
}