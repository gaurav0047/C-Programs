#include<stdio.h>
int main(void)
{
	
	//int arr[]; Invalid
	//int arr[5.0]; Invalid 
	//int arr[0]; Invalid
	//int arr[-5]; Invalid
	//int arr[2+3]; //Valid declaration because 2+3 will be evaluated to 5 during compilation 
	
	int arr[5]; //Valid declaration 
	
	printf("Space = %d bytes \n", sizeof(arr));
	
	printf("Address of arr[0] = %u \n", &arr[0]);
	printf("Address of arr[1] = %u \n", &arr[1]);
	printf("Address of arr[2] = %u \n", &arr[2]);
	printf("Address of arr[3] = %u \n", &arr[3]);
	printf("Address of arr[4] = %u \n", &arr[4]);
	printf("Address inside array name = %u \n", arr);
	printf("Address inside array name = %u \n", &arr);
	
	return 0;
}