#include <stdio.h>
// Write a C program to accept base and height of a triangle and calculate its area.
int main(void)
{

	float height, base, area; // declaring required variables

	printf("Enter Height of a Triangle :");
	scanf("%f", &height);

	printf("\nEnter Base of a Triangle :");
	scanf("%f", &base);

	area = 0.5f * height * base; // formula to calculate area of a triangle

	// area = (float)0.5 * height * base;

	printf("\nArea of a triangle = %.2f \n", area);

	return 0;
}
