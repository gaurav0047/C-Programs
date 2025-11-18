#include<stdio.h>
#include<stdbool.h>  

//compound assignment operators


int main()
{ 
	int a = 5, b=10,c=5;
	a += 7;  // a = a+7;
	
	b /= 2;  // b = b/2 ;
	
	c = a + b ;
	
 	printf("a = %d \t b = %d \t c = %d \n",a,b,c);
 	
	return 0;	
}