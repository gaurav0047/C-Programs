#include <stdio.h>

int main(void)
{
    int arr[100];           
    int i, n;
    int evenSum = 0, oddSum = 0; 

    
    printf("How many elements ? :: ");
    scanf("%d", &n);

    
    printf("\nEnter %d elements ::", n);
    for(i = 0; i < n; ++i)
    {
        printf("\nEnter Element at arr[%d] :: ", i);
        scanf("%d", &arr[i]);

        
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    // Print the array elements
    printf("\n::ARRAY ::");
    for(i = 0; i < n; ++i)
    {
        printf("%d \t", arr[i]);
    }

    // Print the sums
    printf("\nSum of Even Numbers = %d \n", evenSum);
    printf("Sum of Odd Numbers  = %d \n", oddSum);

    return 0;
}
