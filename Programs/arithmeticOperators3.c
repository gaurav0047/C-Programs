#include<stdio.h>
#include<stdbool.h>

/* Arithmetic Operators */

int main()
{
	// Changed to int for modulus operator to work
	int x = 10, y = 3; 
	float a = 10.0f, b = 3.0f; 

	// For Division operator (uses float)
	printf("--- Division (float) ---\n");
	printf("a/b = %.2f \n",a/b);
	printf("-a/b = %.2f \n",-a/b);
	printf("a/-b = %.2f \n",a/-b);
	printf("-a/-b = %.2f \n",-a/-b);
	printf("\n");

	// For Modulus operator (must use int)
	printf("--- Modulus (int) ---\n");
	printf("x%%y = %d \n", x % y);
	printf("-x%%y = %d \n", -x % y);
	printf("x%%-y = %d \n", x % -y);
	printf("-x%%-y = %d \n", -x % -y);
	 
  return 0;
}