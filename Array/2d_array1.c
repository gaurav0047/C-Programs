#include<stdio.h>
int main()
{	
	int arr[3][3]; 
	
	printf("Memory Space required = %d bytes \n", sizeof(arr));
	printf("Address arr[0][0] = %u \n", &arr[0][0]);
	printf("Address arr[0][1] = %u \n", &arr[0][1]);
	printf("Address arr[0][2] = %u \n", &arr[0][2]);
	printf("Address arr[1][0] = %u \n", &arr[1][0]);
	printf("Address arr[1][1] = %u \n", &arr[1][1]);
	printf("Address arr[1][2] = %u \n", &arr[1][2]);
	printf("Address arr[2][0] = %u \n", &arr[2][0]);
	printf("Address arr[2][1] = %u \n", &arr[2][1]);
	printf("Address arr[2][2] = %u \n", &arr[2][2]);
	printf("ADDRESS INSIDE arr = %u \n", arr);
	
    return 0;
}
