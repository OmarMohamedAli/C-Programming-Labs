#include <stdio.h>
#include <stdlib.h>

#define iOS
#define linux
int main()
{
    #ifdef iOS
        printf("This is iOS Code\n");
    #else
        printf("This is code for Android Devices\n");
    #endif



    #ifdef linux
        printf("This is linux Code\n");
    #endif // iOS

    printf("This is code for all non iOS Devices\n");

    return 0;
}
