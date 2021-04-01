#include <stdio.h>
#include <stdlib.h>

int main()
{
    //there Two States:
        //First:
            int arr0[]={1,2,3};
            printf("arr0[-1] = %d \n arr0[3] = %d \n",arr0[-1],arr0[3]);  // Garbage Values
        //Second:
            static int arr1[]={4,5,6};
            printf("arr1[-1] = %d \n arr1[3] = %d \n",arr1[-1],arr1[3]);   // 0 & 0

    return 0;
}
