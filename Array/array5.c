#include<stdio.h>
int main(void)
{
	int arr[5] = {10,20}; //Indices 2,3 and 4 will be having default initial value as ZERO (0)
	
	printf("Value \t Address \n");
	printf("======================\n");
	printf("%d \t %u \n", arr[0], &arr[0]);
	printf("%d \t %u \n", arr[1], &arr[1]);
	printf("%d \t %u \n", arr[2], &arr[2]);
	printf("%d \t %u \n", arr[3], &arr[3]);
	printf("%d \t %u \n", arr[4], &arr[4]);
 
	return 0;
}