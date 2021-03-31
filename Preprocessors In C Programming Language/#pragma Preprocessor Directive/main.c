#include <stdio.h>
#include <stdlib.h>


void __attribute__((constructor)) init();
void __attribute__((destructor)) end();

//#pragma startup init
//#pragma exit end

int main()
{
    printf("We're inside main method\n");

    return 0;
}

void init()
{
    printf("We're inside init method\n");
}

void end()
{
    printf("We're inside end method\n");
}

//-----------------------------------------------------------

//#pragma warn -rvl /* No Return Value */
//#pragma warn -par /* Parameter Not Used */
//#pragma warn -rch /* Unreachable Code */

/*
int main()
{
    int count = 1;

    printf("%d\n", count);

    return 0;

    count++;

}

int total()
{
    printf("Sum of a and b is c\n");
}

void end(int x)
{
    printf("We're inside end method\n");
}
*/
