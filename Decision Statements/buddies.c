#include<stdio.h>
int main(void){
	int num1, num2, sum1 = 0, sum2 = 0, i;
	
	printf("Enter two numbers to check::");
	scanf("%d %d", &num1 ,&num2);
	
	for(i = 1; i <= num1 / 2; ++i)
	{
		if(num1 % i == 0)
		sum1 += i;
	}
	
	for(i = 1; i <= num2 / 2; ++i)
	{
		if(num2 % i == 0)
		sum2 += i;
	}

	if(sum1 == num2 && sum2 == num1) 
	
		printf("\nThe %d and %d are buddies", num1, num2);
	else
		printf("\nThe %d and %d are NOT buddies", num1, num2);	
		
	return 0;
}
