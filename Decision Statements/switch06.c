/*
Menu driven C program to perform arithmetic operations.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num1, num2, ans;
  int choice;
  printf("Enter First No.::");
  scanf("%d", &num1);
  printf("\nEnter Second No.::");
  scanf("%d", &num2);
  printf("\n::MENU::\n");
  printf("1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.MOD\n6.EXIT\n");

  printf("\nENTER YOUR CHOICE ::");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    ans = num1 + num2;
    printf("\n %d + %d = %d \n", num1, num2, ans);
    break;
  case 2:
    ans = num1 - num2;
    printf("\n %d - %d = %d \n", num1, num2, ans);
    break;
  case 3:
    ans = num1 * num2;
    printf("\n %d * %d = %d \n", num1, num2, ans);
    break;
  case 4:
    ans = num1 / num2;
    printf("\n %d / %d = %d \n", num1, num2, ans);
    break;
  case 5:
    ans = num1 % num2;
    printf("\n %d %% %d = %d \n", num1, num2, ans);
    break;
  case 6:
    printf("\nThank you. You are exiting the application");
    exit(1);
  default:
    printf("\nInvalid choice given.\n");
  }

  printf("\nEND of PROGRAM");

  return 0;
}