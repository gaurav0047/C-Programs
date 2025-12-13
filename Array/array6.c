#include<stdio.h>
int main(void)
{
	int arr[] = {10,20,30}; // arr[0]=10, arr[1]=20, arr[2]=30;
	/*Here, C-Compiler automatically computes the size of the array depending 
	upon the count of initializers in the initialization list. */
	
	printf("Value \t Address \n");
	printf("======================\n");
	printf("%d \t %u \n", arr[0], &arr[0]);
	printf("%d \t %u \n", arr[1], &arr[1]);
	printf("%d \t %u \n", arr[2], &arr[2]);
	
	
	/*C-Compiler doesn't check array bounds strictly. So, below lines won't generate errors,
	 but will print some random values... Its undefined behaviour... */  
	printf("%d \t %u \n", arr[3], &arr[3]);
	printf("%d \t %u \n", arr[4], &arr[4]);
 
	return 0;
}