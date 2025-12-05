/* C Program to find factorial of a number  */

#include<stdio.h>
int main(void)
{ 
	int num, fact=1;
	printf("Enter a number :: ");
	scanf("%d" , &num);
	
	if(num==0)
		printf("\n 0! = 1");
	else if(num<0)
		printf("\n Factorial of negative number is not possible...");
	else
	{
		for(int i=1;i<=num;++i)
			fact = fact * i;
	
	printf("\n %d! = %d \n", num, fact);
	}
	return 0;
}