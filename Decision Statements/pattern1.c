/*
Write a C Program to print the below given pattern : 
	ABCDEFGH.....XYZ 
*/


#include<stdio.h>
int main(void)
{ 

	
	//LOGIC-1
	
	/*for(int i = 0; i < 26; ++i)
	{
		printf("%c", i+65);
	}*/
	
	//LOGIC-2
	
	/*
	for(int i=65; i<=90;++i)
		printf("%c", i);
	*/
	
	//LOGIC-3
	for(int i='A'; i<='Z'; ++i)
		printf("%c", i);
	
	return 0;
}