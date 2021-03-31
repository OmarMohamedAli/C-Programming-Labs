#include<stdio.h>

#define PI 3.14159265358979323846

//#define AREA
#define CIRCUM

void area_circle(float r);
void circumference_circle(float r);

int main()
{
    float r;

    printf("Enter radius of Circle\n");
    scanf("%f", &r);

    #if defined(AREA)
        area_circle(r);
    #elif defined(CIRCUM)
        circumference_circle(r);
    #else
        printf("Code To Be Implemented\n");

    #endif // defined

    return 0;
}

void area_circle(float r)
{
    printf("Area of Circle is %f\n", (PI * r * r) );
}

void circumference_circle(float r)
{
    printf("Circumference of Circle is %f\n", (2 * PI * r) );
}
