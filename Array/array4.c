#include<stdio.h>
int main(void)
{
	int arr[5] = {10,20,30,40,50,60,70}; //Warning : Excess Initializers
	
	printf("Value \t Address \n");
	printf("======================\n");
	printf("%d \t %u \n", arr[0], &arr[0]);
	printf("%d \t %u \n", arr[1], &arr[1]);
	printf("%d \t %u \n", arr[2], &arr[2]);
	printf("%d \t %u \n", arr[3], &arr[3]);
	printf("%d \t %u \n", arr[4], &arr[4]);
 
	return 0;
}