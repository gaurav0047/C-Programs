#include <stdio.h>

int main()
{
  int num, rem, rev = 0, final = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  // remove zeros and reverse at same time
  while (num > 0)
  {
    rem = num % 10;
    if (rem != 0)
    {
      rev = rev * 10 + rem;
    }
    num /= 10;
  }

  // reverse again to restore order
  while (rev > 0)
  {
    final = final * 10 + (rev % 10);
    rev /= 10;
  }

  printf("Number without zeros = %d", final);

  return 0;
}
