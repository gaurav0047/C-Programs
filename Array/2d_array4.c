#include<stdio.h>
int main()
{	

/*We can keep ROW value empty i.e. it is optional dimension. Because based
on the number of COLUMNS, compiler creates the ROWS. 
But COLUMN size cannot be kept empty. It is compulsory dimension. */

	int arr[][3] = { 1,5,8,4,3,0,7 }; 
	
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