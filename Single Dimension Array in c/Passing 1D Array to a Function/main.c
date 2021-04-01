#include <stdio.h>
#include <stdlib.h>

void Print_Array0(int arr0[] ,const int size);
void Print_Array1(int arr1);
void Print_Array2(int *arr2 ,const int size);

int main()
{

    int a[3]={1,2,3};

    Print_Array1(*a);      // Address of first Element
    printf("\n");
    Print_Array1(a[1]);   // value of first Element
    printf("\n");
//---------------------------------------------------
// pass array using pointer to first element in the array
    // Array 0
    Print_Array0(&a[0],3);
    printf("\n");
    // Array 2
    Print_Array2(&a[0],3);
    printf("\n");

    // Array 0
    Print_Array0(a,3);
    printf("\n");
    // Array 2
    Print_Array2(a,3);
    printf("\n");


    return 0;
}

void Print_Array0(int arr0[] ,const int size)
{
    for (int i=0; i<size; i++)
    {
        printf("arr0[%d] = %d ",i,arr0[i]);
    }
}

void Print_Array1(int arr1)
{
    printf("arr1 element = %d ",arr1);
}


void Print_Array2(int *arr2 ,const int size)
{
    for (int i=0; i<size; i++)
    {
        printf("arr2[%d] = %d ",i,*(arr2+i));
    }
}
