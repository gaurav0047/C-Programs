#include<stdio.h>
int main()
{
	int check=2;
	
	switch(check)
	{
		case 1: printf("Sachin ");
		case 2: printf("Sourav ");
		case 3: printf("Laxman ");
		default: printf("Rahul ");
	}
	
	return 0;
}