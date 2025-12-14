#include<stdio.h>
int main(void){
	int num, temp, temp1, digit, sum = 0, mul = 1;
	
	printf("Enter a number::");
	scanf("%d", &num);
	temp = temp1 = num;
	
	while(temp != 0)
	{
		digit = temp % 10;
		sum += digit;
		mul *= digit;
		temp /= 10;
	}
	
	if(mul == sum)
		printf("\nThe %d is a  Spy number", num);
	else
		printf("\nThe %d is a NOT Spy number", num);	
		
	return 0;
}
