
//C Program to accept N elements of an array from the end user and print them all. 

#include<stdio.h>
int main(void)
{
	int arr[5];
	int i,n;
	printf("How many elements ? ::");
	scanf("%d" , &n);
	printf("\nEnter %d elements ::", n);
	for(i=0;i<n;++i)
	{
		printf("\nEnter Element at arr[%d] :: ", i);
		scanf("%d" , &arr[i]);
	}
	
	printf("\n::ARRAY ::");
	for(i=0;i<n;++i)
	{
		printf("%d \t", arr[i]);
	}
		
    return 0;
}