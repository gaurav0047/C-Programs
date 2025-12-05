#include <stdio.h>

int main()
{
  int num, rem, pos = 1, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (num > 0)
  {
    rem = num % 10;

    if (pos % 2 != 0)
    { // odd position
      sum += rem;
    }

    pos++;
    num /= 10;
  }

  printf("Sum of digits at odd places = %d", sum);

  return 0;
}
