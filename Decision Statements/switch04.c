#include <stdio.h>
int main()
{
  int c = 3;
  switch (c)
  {
  case '3':
    printf("Hello World\n");
    break;
    /* case 51:    //This gives error b'cz the ASCII value of '3' is also 51
       printf("This is tricky \n");
       break;
   */
  case 3:
    printf("This is tricky\n");
    break;

  default:
    printf("\nIn default");
  }

  return 0;
}