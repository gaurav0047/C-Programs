
//Program to print the array elements 

#include<stdio.h>
int main(void)
{
 	int arr[5] = {4,9,1,8,2};
 	int i;
 	
 	printf("Printing Array Elements in FORWARD DIRECTION :: \n");
 	
 	for(i=0;i<5;++i)
 	{
 		printf("%d \t", arr[i]);	
	}
	
	printf("\nPrinting Array Elements in REVERSE ORDER :: \n");
	
	for(i=4;i>=0;--i)
		printf("%d \t", arr[i]);
		
    return 0;
}