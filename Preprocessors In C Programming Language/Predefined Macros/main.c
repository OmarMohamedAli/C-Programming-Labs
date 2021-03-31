#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("File: %s\n", __FILE__);               // The name(along with full path) of the current file, as a string literal.
    printf("Date: %s\n", __DATE__);               // Current System date, as a string literal.
    printf("Time: %s\n", __TIME__);               // Current System time, as a string literal.
    printf("Timestamp: %s\n", __TIMESTAMP__);     // Current System date and time(non-standard), as a string literal.
    printf("Line: %d\n", __LINE__);               // Current line in the source code file where __LINE__ is written, as numeric literal.
    printf("ANSI: %d\n", __STDC__);               // its value is 1, when the compiler compiles with the ANSI standard.
    printf("Function Name: %s\n", __func__);      //returns function name
    printf("Pretty Function name: %s\n", __PRETTY_FUNCTION__);  //returns function name, but not all compilers support both (__func__ &  __PRETTY_FUNCTION__ ) Sometimes its compiler specific.

    return 0;
}
