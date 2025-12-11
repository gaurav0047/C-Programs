#include <stdio.h>

int main()
{
  int a, b, choice;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  do
  {
    printf("\n----- MENU -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Addition = %d\n", a + b);
      break;

    case 2:
      printf("Subtraction = %d\n", a - b);
      break;

    case 3:
      printf("Multiplication = %d\n", a * b);
      break;

    case 4:
      if (b == 0)
        printf("Error: Division by zero not allowed!\n");
      else
        printf("Division = %d\n", a / b);
      break;

    case 5:
      if (b == 0)
        printf("Error: Modulus by zero not allowed!\n");
      else
        printf("Modulus = %d\n", a % b);
      break;

    case 6:
      printf("Exiting program...\n");
      break;

    default:
      printf("Invalid choice! Please try again.\n");
    }

  } while (choice != 6);

  return 0;
}
