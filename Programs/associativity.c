#include <stdio.h>

// Order of evaluation (Associativity)

int main()
{
  int a = 10, b = 5, c = 8;

  int ans1 = 2 * 3 % 5 * 6 / 2; // Left to Right

  int ans2 = (a += b /= c %= 3); //  a = a+b , b = b / c, c = c %3  c==2 , b==2, a==12  Right to Left

  printf("Answer1 -- > %d \n\n", ans1);

  printf("Answer2 -- > %d  %d  %d  %d \n", a, b, c, ans2);

  return 0;
}