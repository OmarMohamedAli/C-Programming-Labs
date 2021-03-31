#include <stdio.h>
#include <stdlib.h>

#include "circle.h"

int main()
{
    float r;
    printf("Enter radius of Circle\n");
    scanf("%f", &r);
    printf("Area of Circle is %f\n", circle_area(r, PI));
    return 0;
}
