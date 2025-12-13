//C Program to count even and odd elements in the array. 

// LOGIC - 1

#include<stdio.h>
int main(void)
{
	int arr[5];
	int i,N, evencnt=0;
	printf("How many elements ? ::");
	scanf("%d" , &N);
	printf("\nEnter %d elements ::", N);
	for(i=0;i<N;++i)
	{
		printf("\nEnter Element at arr[%d] :: ", i);
		scanf("%d" , &arr[i]);
	}
	
	printf("\n::ARRAY ::");
	for(i=0;i<N;++i)
	{
		printf("%d \t", arr[i]);
	}
	
	//logic to count even numbers
	for(i=0;i<N;++i)
		if(arr[i]%2==0)
			++evencnt;

	printf("\n Even Numbers = %d \n", evencnt);
	printf("\n Odd Numbers = %d \n", N - evencnt);
		
    return 0;
}