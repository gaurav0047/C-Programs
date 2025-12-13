// C Program to count even and odd elements in the array

// LOGIC - 2

#include <stdio.h>
int main(void)
{
  int arr[100];
  int i, n, evencnt = 0;
  printf("How many elements ? ::");
  scanf("%d", &n);
  printf("\nEnter %d elements ::", n);

  for (i = 0; i < n; ++i)
  {
    printf("\nEnter Element at arr[%d] :: ", i);
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
      ++evencnt;
  }

  printf("\n::ARRAY ::");
  for (i = 0; i < n; ++i)
  {
    printf("%d \t", arr[i]);
  }
  printf("\n Even Numbers = %d \n", evencnt);
  printf("\n Odd Numbers = %d \n", n - evencnt);

  return 0;
}