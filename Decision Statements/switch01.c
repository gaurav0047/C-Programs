#include <stdio.h>
int main()
{
  int choice = 1;
  printf("START\n");
  switch (choice)
  {
    printf("Hello BCA\n");

  case 10 < 5:
    printf("ZERO\n");
    break;
  case 1:
    printf("ONE\n");
    break;
  case 2 / 1:
    printf("TWO\n");
    break;
  case 3 * 1 + 0:
    printf("THREE\n");
    break;
  default:
    printf("Invalid input given\n");
  }
  printf("END\n");
  return 0;
}