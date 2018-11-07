#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    char * const line = "================================================================================\n";
    printf(line);
    float var_float = M_PI;
    printf("Пи = %f\n", var_float);
    printf("Пи = %e\n", var_float);
    printf("Пи = %g\n", var_float);
    printf(line);
    float var_double = 1/3.0;
    printf("Одна третья = %f\n", var_double);
    printf("Одна третья = %e\n", var_double);
    printf("Одна третья = %g\n", var_double);
    printf(line);
    char var_char = '!';
    printf("Восклицательный знак такой: %c\n", var_char);
    printf(line);
    int var_int = 69;
    printf("%i это %d\n", var_int, var_int);
    printf(line);
    unsigned int var_uint = 42;
    printf("%d это %u, а также %o или %X\n", var_uint, var_uint, var_uint, var_uint);
    printf(line);
    short int var_sint = 13;
    printf("Короткие такие короткие как и %hd\n", var_sint);
    printf(line);
    long int var_lint = LONG_MAX;
    printf("С длинными надо так: %ld, но не так: %d\n", var_lint, var_lint);
    printf(line);
    long double var_ldouble = M_E;
    printf("С длинными вещественными надо так: %Lf, но не так: %f\n", var_ldouble, var_ldouble);
    printf(line);
    char *var_string = "Я - строка!";
    printf("А она говорит: %s и мой адрес %p\n", var_string, var_string);
    printf(line);
    return 0;
}
