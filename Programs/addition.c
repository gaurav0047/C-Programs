#include <stdio.h>
int main(void)
{
  int num1, num2, ans;
  printf("Enter the numbers divided by spaces::");
  scanf("%d %d", &num1, &num2);
  ans = num1 + num2;
  printf("\nThe sum of given %d and %d is %d.", num1, num2, ans);
  return 0;
}