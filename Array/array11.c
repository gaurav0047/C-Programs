#include<stdio.h>
int main(void)
{
	int arr[5] = {15,'A',2.5,6.3f, 55};
	int i;
	
	for(i=0;i<5;++i)
		printf("%d \t", arr[i]);

    return 0;
}