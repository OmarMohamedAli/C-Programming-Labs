#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int* ptr;
    ptr = A;

    // Input elements in array using pointer
    printf("Enter 5 elements in the array : \n");
    for (int i=0; i<5; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",ptr+i);
    }

    // Print all elements of array using dereference pointer
    printf("\nFirst Way using *(ptr+i)");
    printf("\nElements in array are: \n");
    for (int i=0; i<5; i++)
    {
        printf("A[%d] = %d  ",i,*(ptr+i));
    }

    printf("\n");
    printf("\nSecond Way using i[A]");
    printf("\nElements in array are: \n");
    for (int i=0; i<5; i++)
    {
        printf("A[%d] = %d  ",i,i[A]);
    }

    printf("\n");
    printf("A[%d] = %d  ",0,(A+1)[-1]);
    printf("A[%d] = %d  ",1,(A+1)[0]);
    printf("A[%d] = %d  ",2,(A+1)[1]);
    printf("A[%d] = %d  ",3,(A+1)[2]);
    printf("A[%d] = %d  \n",4,(A+1)[3]);

    printf("\nThird Way using (A+1)[i]");
    printf("\nElements in array are: \n");
    for (int i=-1; i<4; i++)
    {
        printf("A[%d] = %d  ",i+1,(A+1)[i]);
    }

    printf("\n");
    
    
    return 0;
}
