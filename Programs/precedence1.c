#include <stdio.h>
// https://en.cppreference.com/w/c/language/operator_precedence

// https://en.cppreference.com/w/c/language/eval_order

int main()
{

  int ans1 = 2 * 3 + 4 % 5 - 3 / 2 + 6;

  int ans2 = 5 * 3 / 4 + 8 / 2 - 1 + 6 % 7 + 9;

  printf("Answer1 -- > %d \n\n", ans1);

  printf("Answer2 -- > %d \n", ans2);

  return 0;
}