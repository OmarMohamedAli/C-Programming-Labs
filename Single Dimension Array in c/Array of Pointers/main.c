#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, z, *Arr0[3];
    Arr0[0] = &x;
    Arr0[1] = &y;
    Arr0[2] = &z;

    for (int i; i<3; i++)
    {
        printf("Arr0[%d] = %d \n",i , Arr0[i]);
    }



    return 0;
}
