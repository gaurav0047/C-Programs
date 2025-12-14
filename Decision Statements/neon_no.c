#include<stdio.h>
int main(void){
	int num, sqr, temp, digit, sum = 0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	temp = num;
	
	while(temp != 0)
	{
		digit = temp % 10;
		sum += digit;
		temp /= 10;
	}
	
	if(sum == num)
		printf("\nThe %d is a  Neon number", num);
	else
		printf("\nThe %d is a NOT Neon number", num);	
		
	return 0;
}
