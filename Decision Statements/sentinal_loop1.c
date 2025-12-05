#include <stdio.h>
#include <stdlib.h>
int main()
{
  char wish;
  printf("START\n");
  do
  {
    printf("Hello FYBCA\n");
    printf("Do you want to continue(y/Y) ?::");
    scanf(" %c", &wish);

  } while (wish == 'y' || wish == 'Y');

  printf("END\n");
  return 0;
}