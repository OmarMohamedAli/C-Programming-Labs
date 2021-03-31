#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ( x > y ? x : y )
#define SQUARE(n) (n * n)

int main()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    printf("Biggest of %d and %d is %d\n", a, b, MAX(a, b));
    printf("%f \n", 64/SQUARE(4));
    return 0;
}
