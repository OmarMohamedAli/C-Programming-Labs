#include <stdio.h>
#include <stdlib.h>

#define MARKS 50    // MARKS should be evaluated to non-zero number

int main()
{
    #if MARKS
        printf("GRADE A\n");
    #endif // MARKS

    printf("Your Result\n");


//Using logical operatation
//-------------------------
    #if(MARKS <= 100 && MARKS >= 80)
        printf("GRADE A\n");
    #endif // MARKS

    printf("Your Result\n");


//Nesting of Directives
//---------------------
    #if(MARKS <= 100)
        printf("GRADE A\n");
        #if(MARKS >= 80)
            printf("You're excellent!\n");
        #else
            printf("You're not that excellent yet!\n");
        #endif
    #endif // MARKS

    printf("Your Result\n");


//#if #elif #else #endif
//----------------------
    #if(MARKS <= 100 && MARKS >= 80)
        printf("GRADE A\n");
    #elif(MARKS <= 79 && MARKS >= 60)
        printf("GRADE B\n");
    #elif(MARKS <= 59 && MARKS >= 40)
        printf("GRADE C\n");
    #elif(MARKS <= 39 && MARKS >= 30)
        printf("GRADE D\n");
    #else
        printf("Please retake the test!\n");
    #endif // MARKS

    printf("Your Result\n");



    return 0;
}
