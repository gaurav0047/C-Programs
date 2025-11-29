#include <stdio.h>
/*Write a C program to print sum of first N natural numbers.
Accept the value of N from the user.(use formula of sum of first  N natural numbers)*/
// Exa. if N = 5, then answer = 1 + 2 + 3 + 4 + 5 = 15

/*WAY-3*/

int main()
{
  int N;
  printf("Enter  value  of  N :: ");
  scanf("%d", &N);
  int sum = N * (N + 1) / 2;
  printf("Sum of first %d natural numbers = %d\n", N, sum);
  return 0;
}
