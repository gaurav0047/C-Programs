#include<stdio.h>
int main(void){
	int num, temp, digit, sum = 0;
	
	printf("Enter a number::");
	scanf("%d", &num);
	temp = num;
	
	while(temp != 0)
	{
		digit = temp % 10;
		sum += digit;
		temp /= 10;
	}
	
	if(num % sum == 0)
		printf("\nThe %d is a Niven number", num);
	else
		printf("\nThe %d is a NOT Niven number", num);	
		
	return 0;
}
