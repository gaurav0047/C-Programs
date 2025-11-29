#include <stdio.h>
/*Write a C program to print sum of first N natural numbers.
Accept the value of N from the user. (Use while loop) */

// Exa. if N = 5, then answer = 1 + 2 + 3 + 4 + 5 = 15

/*WAY-2*/

int main()
{
  int N, i = 1;
  int sum = 0;

  printf("Enter  value  of  N :: ");
  scanf("%d", &N);

  while (i <= N)
  {
    sum = sum + i; // sum += i;
    ++i;
  }
  printf("Sum of first %d natural numbers = %d\n", N, sum);
  return 0;
}
