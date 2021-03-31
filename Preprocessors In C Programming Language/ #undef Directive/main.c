#include <stdio.h>
#include <stdlib.h>

#define iOS
#undef iOS

int main()
{
    #if defined(iOS)
        printf("I Love Apple Devices\n");
    #else
        printf("Macro iOS has been undefined\n");
    #endif // defined

//-----------------------------------
    #define iOS
    #if defined(iOS)
        printf("I Love Apple Devices\n");
    #else
        printf("Macro iOS has been undefined\n");
    #endif // defined

    return 0;
}
