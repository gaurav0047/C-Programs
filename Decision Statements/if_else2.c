// Write a C program to accept age from the user and prints whether the user is eligible to vote.

#include <stdio.h>
int main(void)
{
  int age;
  printf("Hey user, enter your age ::");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("Welcome to Booth.\n");
    printf("You are eligible to vote.\n");
  }
  else
  {
    printf("\nSorry Compatriot. You are minor to vote...");
  }

  return 0;
}