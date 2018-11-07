#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    for (i = 1; i < 11; i++)
    {
        double p = pow(i, 2);
        printf("%d^2 = %g\n", i, p);
    }
    return 0;
}
