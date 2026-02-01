#include <stdio.h>
//Write a C program to accept radius of a Circle from the user and calculate its area.
int main(void)
{
	float radius, area;
	printf("Enter radius of a Circle : ");
	scanf("%f", &radius); 
	
	//area = 3.14f * radius * radius; 
	area = (float)3.14 * radius * radius; 
	
	printf("\nArea of a Circle = %.2f \n", area);

	return 0;
}
