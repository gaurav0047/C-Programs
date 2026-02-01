#include <stdio.h>
#include <stdbool.h>

// Only zero is false, otherwise every value is true...

int main()
{
  bool val1 = 7.45F, val2 = 20, val3 = "Hello", val4 = 0.0, val5 = 0.000000001, val6 = '\0';

  printf(" val1 = %d \n val2 = %d \n val3 = %d \n", val1, val2, val3);

  printf(" val4 = %d \n val5 = %d \n val6 = %d \n", val4, val5, val6);

  return 0;
}