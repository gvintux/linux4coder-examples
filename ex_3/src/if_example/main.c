#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float x = 0.0f;
    printf("x = ");
    scanf("%f", &x);
    float f = 0.0f;
    if(x > 0) f = 2 * cos(x);
    else f = 10 - x;
    printf("f = %g\n", f);
    return 0;
}
