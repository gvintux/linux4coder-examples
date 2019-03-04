#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int(*test)(double);

typedef struct
        {
            int n;
            double * array;
        } filter_result;

filter_result filter(double *a, int size, test ffunc);
int isPositive(double x);
int hasFractionPart(double x);
void printArray(double *a, int size);

int main(void)
{
    printf("n = ");
    int n = 0;
    scanf("%i", &n);
    double *a = (double*)malloc(n * sizeof(double));
    int i;
    for(i = 0; i < n; i++)
    {
        printf("A[%i] = ", i);
        scanf("%lf", &a[i]);
    }
    printf("Ваш массив\n");
    printArray(a, n);
    filter_result positives = filter(a, n, isPositive);
    filter_result fractions = filter(a, n, hasFractionPart);
    printf("Из них положительные\n");
    printArray(positives.array, positives.n);
    printf("Из них с дробной частью\n");
    printArray(fractions.array, fractions.n);
    free(a);
    free(positives.array);
    free(fractions.array);
    return 0;
}

filter_result filter(double *a, int size, test acceptable)
{
    filter_result result;
    result.array = (double*)malloc(size * sizeof(double));
    result.n = 0;
    int dst_index = 0;
    int src_index = 0;
    for(src_index = 0 ; src_index < size; ++src_index)
    {
        if(acceptable(a[src_index]))
        {
            result.array[dst_index] = a[src_index];
            ++dst_index;
        }
    }
    result.n = dst_index;
    result.array = (double*)realloc(result.array, result.n);
    return result;
}

int isPositive(double x) { return x > 0; }
int hasFractionPart(double x) { double z; return modf(x, &z) != 0; }
void printArray(double *a, int size)
{
    int i;
    for(i = 0; i < size - 1; ++i) printf("%g ", a[i]);
    printf("%g\n", a[i]);
}

