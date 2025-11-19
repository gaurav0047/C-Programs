#include <stdio.h>
#include <stdlib.h>
//Program to check ODD or EVEN number  

int main(void)
{
	int num;
	printf("Enter a number::");
	scanf("%d", &num);
	
	if(num%2==0)
	 	printf("\n %d is a even number \n", num);
	else 
	    printf("\n %d is a odd number \n", num);
  
	    
	 return 0;
}
