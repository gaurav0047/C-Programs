#include<stdio.h>
int main()
{	
	int arr[3][3] = { 
						{1,5,8},
						{4,3,0},
						{7,6,2}
				    }; 
	// 	int arr[3][3] = { {1,5,8},{4,3,0},{7,6,2}  }; 
	// int arr[3][3] = { 1,5,8,4,3,0,7,6,2 }; 
	
	printf("arr[0][0] = %d \n", arr[0][0]);
	printf("arr[0][1] = %d \n", arr[0][1]);
	printf("arr[0][2] = %d \n", arr[0][2]);
	printf("arr[1][0] = %d \n", arr[1][0]);
	printf("arr[1][1] = %d \n", arr[1][1]);
	printf("arr[1][2] = %d \n", arr[1][2]);	 
	printf("arr[2][0] = %d \n", arr[2][0]);
	printf("arr[2][1] = %d \n", arr[2][1]);
	printf("arr[2][2] = %d \n", arr[2][2]);	 
	
    return 0;
}
