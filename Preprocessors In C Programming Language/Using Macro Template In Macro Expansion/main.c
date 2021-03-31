#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846
#define AREA(r) ( PI * r * r )

int main()
{
    float r;
    printf("Enter radius of Circle\n");
    scanf("%f", &r);
    printf("Area of Circle is %f\n", AREA(r));
    return 0;
}
