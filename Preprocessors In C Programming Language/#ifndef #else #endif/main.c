#include <stdio.h>
#include <stdlib.h>

#define iOS

int main()
{
    #ifndef iOS
        printf("I Love Apple Devices\n");
    #else
        printf("Code for Non Apple Devices\n");
    #endif // iOS

    return 0;
}
