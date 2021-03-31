#include <stdio.h>
#include <stdlib.h>

#define SQUR(x) \
        printf("Square of %d is %d\n", x, (x * x));

int main()
{
    SQUR(5);

    return 0;
}
