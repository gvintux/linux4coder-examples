#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    for (i = 0; i < 11; i++)
    {
        if (i % 2 == 0) continue;
        sum += i;
    }
    printf("sum is %d\n", sum);
    return 0;
}
