/* C Program to find x to the power y  */

#include <stdio.h>
int main(void)
{
  int x, y, ans = 1;
  printf("Enter the value of base :: ");
  scanf("%d", &x);
  printf("\nEnter the value of power :: ");
  scanf("%d", &y);

  for (int i = 1; i <= y; ++i)
  {
    ans = ans * x; // ans *= x;
  }

  printf("\n %d to the power %d is %d \n", x, y, ans);

  return 0;
}