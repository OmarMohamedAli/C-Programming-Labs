#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={1,20,100};
    int B[]={5,8,9};

    printf("%d \n",A-B);
    printf("%d \n",B-A);

    printf("%d \n",B[0]-A[0]);
    printf("%d \n",B[1]-A[0]);
    printf("%d \n",B[2]-A[0]);

    printf("%d \n",A[1]-A[0]);
    printf("%d \n",A[2]-A[0]);

    return 0;
}
