#include <stdio.h>

// const demo

int main()
{
  int x = 10; // x is a regular variable

  const int y = 20; // y is a constant (read-only)

  printf("Initial values: x = %d \t y = %d \n", x, y);

  x = 100; // Re-assignment for x is **Valid**
  // y = 200;  // **INVALID** - Must be commented out or removed

  printf("Updated values: x = %d \t y = %d \n", x, y);

  return 0;
}