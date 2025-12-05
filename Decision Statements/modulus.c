#include <stdio.h>

int main()
{
  int dividend, divisor;

  printf("Enter dividend: ");
  scanf("%d", &dividend);

  printf("Enter divisor: ");
  scanf("%d", &divisor);

  int temp = dividend;

  while (temp >= divisor)
  {
    temp = temp - divisor;
  }

  printf("Remainder = %d", temp);

  return 0;
}
