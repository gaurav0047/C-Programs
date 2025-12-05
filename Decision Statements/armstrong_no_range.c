#include <stdio.h>
#include <math.h>

int main()
{
  int num, sum, rem, temp;

  printf("Armstrong numbers between 1 to 1000 are:\n");

  for (num = 1; num <= 1000; num++)
  {
    temp = num;
    sum = 0;

    while (temp > 0)
    {
      rem = temp % 10;
      sum += rem * rem * rem; // cube of digit
      temp /= 10;
    }

    if (sum == num)
      printf("%d ", num);
  }

  return 0;
}
