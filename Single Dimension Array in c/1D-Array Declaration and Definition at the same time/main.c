#include <stdio.h>
#include <stdlib.h>



int main()
{

  // How Array Size is entered?
  //   1. Number
        char arr0[3];

  //   1. Constant variable
        const n = 3;
        char arr1[n];

  //   1. Macro Expansion
        #define size 3
        char arr2[size];

//-------------------------------------------------------------------

  // Array Size is not important to determine in this cases:
     // 1. when Initialization is apart of Definition.
            char B[]={1,4,7};
     // 2. it is Formal Parameters (Function Call).
          // FFF(B[]);

//-------------------------------------------------------------------

  // Declaration and Initialization
    // First Dimension is optional when declare and initialize the array at the same time (1D, 2D & Multi-Dimension Array )
       char C[3]={1,4,7};  // Array size here is option not necessary
       printf("First Element in 1D C Array is : %d \n",C[0]);
       printf("Second Element in 1D C Array is: %d \n",C[1]);
       printf("Third Element in 1D C Array is : %d \n",C[2]);
//--------------------------------------------------------------------

       char D[3]={1};   // {1,0,0} Complete Remainder elements with zeros
       printf("First Element in 1D D Array is : %d \n",D[0]);
       printf("Second Element in 1D D Array is: %d \n",D[1]);
       printf("Third Element in 1D D Array is : %d \n",D[2]);

//---------------------------------------------------------------------

    // char E[3]={1, ,3}; // error: expected expression before ',' token

//---------------------------------------------------------------------



    return 0;
}

