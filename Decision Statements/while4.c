/*Write a C program to print sum of first N natural numbers.
Accept the value of N from the user. (Use while loop) */

// Exa. if N = 5, then answer = 5 + 4 + 3 + 2 + 1 = 15

/*WAY-1*/

#include <stdio.h>
int main()
{
  int N;
  printf("Enter  value  of  N :: ");
  scanf("%d", &N);
  int xnum = N;
  int sum = 0;

  while (N > 0)
  {
    sum = sum + N;
    --N;
  }

  printf("Sum of first %d natural numbers = %d\n", xnum, sum);
  return 0;
}