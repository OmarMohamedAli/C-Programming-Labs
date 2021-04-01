#include <stdio.h>
#include <stdlib.h>



int main()
{
    int arr[5];

    // Input elements in array
    printf("Enter 5 elements in the array : \n");
    for (int i=0; i<5; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    // Print all elements of array
    printf("\nElements in array are: \n");
    for (int i=0; i<5; i++)
    {
        printf("arr[%d] = %d ",i,arr[i]);
    }

    printf("\n");


    return 0;
}




