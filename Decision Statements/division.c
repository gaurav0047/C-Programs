#include <stdio.h>

int main()
{
  int dividend, divisor, quotient = 0;

  printf("Enter dividend: ");
  scanf("%d", &dividend);

  printf("Enter divisor: ");
  scanf("%d", &divisor);

  int temp = dividend;

  while (temp >= divisor)
  {
    temp = temp - divisor;
    quotient++;
  }

  printf("Quotient = %d", quotient);

  return 0;
}
