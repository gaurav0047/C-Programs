#include <stdio.h>

int main()
{
  float r, volume;

  printf("Enter radius of sphere: ");
  scanf("%f", &r);

  if (r < 0)
    printf("Radius cannot be negative\n");
  else
  {
    volume = (4.0 / 3.0) * 3.14 * r * r * r;
    printf("Volume of sphere = %.2f\n", volume);
  }

  return 0;
}
