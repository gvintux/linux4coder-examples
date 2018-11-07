#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    do
    {
        double p = pow(i, 2);
        printf("%d^2 = %g\n", i, p);
        i++;
    } while (i < 11);
    return 0;
}
