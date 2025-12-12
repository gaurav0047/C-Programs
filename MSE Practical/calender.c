#include <stdio.h>

int main()
{
  int month;

  do
  {
    printf("\nEnter month number (1-12, 0 to exit): ");
    scanf("%d", &month);

    if (month == 0)
      printf("Exiting...\n");
    else if (month < 1 || month > 12)
      printf("Invalid month number\n");
    else
    {
      // You can replace the switch-case below with an if-else ladder
      switch (month)
      {
      case 1:
        printf("January - 31 days\n");
        break;
      case 2:
        printf("February - 28 or 29 days (leap year)\n");
        break;
      case 3:
        printf("March - 31 days\n");
        break;
      case 4:
        printf("April - 30 days\n");
        break;
      case 5:
        printf("May - 31 days\n");
        break;
      case 6:
        printf("June - 30 days\n");
        break;
      case 7:
        printf("July - 31 days\n");
        break;
      case 8:
        printf("August - 31 days\n");
        break;
      case 9:
        printf("September - 30 days\n");
        break;
      case 10:
        printf("October - 31 days\n");
        break;
      case 11:
        printf("November - 30 days\n");
        break;
      case 12:
        printf("December - 31 days\n");
        break;
      }

      /* Equivalent if-else ladder that can replace the switch:

      if (month == 1)
        printf("January - 31 days\n");
      else if (month == 2)
        printf("February - 28 or 29 days (leap year)\n");
      else if (month == 3)
        printf("March - 31 days\n");
      else if (month == 4)
        printf("April - 30 days\n");
      else if (month == 5)
        printf("May - 31 days\n");
      else if (month == 6)
        printf("June - 30 days\n");
      else if (month == 7)
        printf("July - 31 days\n");
      else if (month == 8)
        printf("August - 31 days\n");
      else if (month == 9)
        printf("September - 30 days\n");
      else if (month == 10)
        printf("October - 31 days\n");
      else if (month == 11)
        printf("November - 30 days\n");
      else if (month == 12)
        printf("December - 31 days\n");
      */
    }
  } while (month != 0);

  return 0;
}
