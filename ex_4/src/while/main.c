#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    while (i != 11)
    {
        double p = pow(i, 2);
        printf("%d^2 = %g\n", i, p);
        i++;
    }
    return 0;
}
