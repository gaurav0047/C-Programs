#include <stdio.h>

int main()
{
  int num, temp, rem, rev, range;

  printf("Enter a last digit of range::");
  scanf("%d", &range);
  printf("Palindrome numbers between 1 to %d:\n", range);

  for (num = 1; num <= range; num++)
  {
    temp = num;
    rev = 0;

    while (temp > 0)
    {
      rem = temp % 10;
      rev = rev * 10 + rem;
      temp /= 10;
    }

    if (rev == num)
      printf("%d ", num);
  }

  return 0;
}
