#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define Display printf("I'm Display a Guy")

int main()
{
    float r,area;
    printf("Please Enter Radius of Circle \n");
    scanf("%f",&r);
    area = PI * r * r ;
    printf("area of circle is %f \n",area);
    Display;
    return 0;
}
