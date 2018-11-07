#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("n = ");
    scanf("%d", &n);
    srand(n);
    while(1)
    {
        int r = RAND_MAX / rand();
        if(r > n)
        {
            printf("%d > %d\n", r, n);
            break;
        }
    }
    return 0;
}
