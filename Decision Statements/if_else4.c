#include<stdio.h>

//Program based on if-else ladder  

int main(void)
{
  	int num;
	printf("Enter a number :: ");
	scanf("%d" , &num);
	
	if(num==0)
		printf("Its a neutral number\n");	
	else if(num>0)
		printf("Given number %d is Positive\n", num);
	else
		printf("Given number %d is Negative\n", num);
	
 	
	return 0;
}
