#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    float var_float = M_PI;
    char * const line = "================================================================================\n";
    printf(line);
    printf("Пи = %d\n", var_float);
    printf(line);
    int var_int = -69;
    printf("%u меньше нуля\n", var_int);
    printf(line);
    long int var_lint = LONG_MAX;
    printf("Максимальное длинное целое: %d\n", var_lint);
    printf(line);
    int var_value;
    printf("var_value = ");
    scanf("=%d", &var_value);
    printf("Спасибо что ввели %d\n", var_value);
    printf("Введите целое число: ");
    scanf("%d", var_value);
    printf("Спасибо что ввели %d\n", var_value);
    return 0;
}
