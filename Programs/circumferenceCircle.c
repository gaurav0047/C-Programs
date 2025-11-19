#include <stdio.h>
// Write a C program to accept radius of a Circle from the user and calculate Circumference.
int main(void)
{
  float radius, circumference;
  printf("Enter radius of a Circle : ");
  scanf("%f", &radius); // 3.5

  circumference = 2 * 3.14f * radius;

  printf("\nCircumference of a Circle = %.2f \n", circumference);

  return 0;
}
