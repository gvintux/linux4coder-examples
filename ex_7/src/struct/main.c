#include <stdio.h>
int main(void)
{
    struct point
    {
        double x;
        double y;
    } A, B, C;
    printf("Точка A:\n");
    printf("x = ");
    scanf("%lf", &A.x);
    printf("y = ");
    scanf("%lf", &A.y);
    printf("Точка B:\n");
    printf("x = ");
    scanf("%lf", &B.x);
    printf("y = ");
    scanf("%lf", &B.y);
    C.x = (A.x + B.x) / 2;
    C.y = (A.y + B.y) / 2;
    printf("Середина отрезка AB (%g, %g)\n", C.x, C.y);
    return 0;
}
