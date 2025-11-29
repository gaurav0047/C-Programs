#include <stdio.h>
// Jump Statement goto
int main(void)
{
  printf("Line-1\n");
  goto TEST; // Control goes to the label TEST
  printf("Line-2\n");
  printf("Line-3\n");
TEST:
  printf("Line-4\n");
  printf("Line-5\n");
  return 0;
}