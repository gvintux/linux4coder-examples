#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    char * const line = "================================================================================\n";
    char var_char;
    unsigned char var_uchar;
    int var_int;
    unsigned int var_uint;
    short int var_sint;
    unsigned short int var_usint;
    long int var_lint;
    unsigned long int var_ulint;
    float var_float;
    double var_double;
    long double var_ldouble;
    printf(line);
    printf("char type info:\n");
    printf("size\t%lu\n", sizeof(var_char));
    printf("between\t%d and %d\n", CHAR_MIN, CHAR_MAX);
    printf(line);
    printf("unsigned char type info:\n");
    printf("size\t%lu\n", sizeof(var_uchar));
    printf("between\t%u and %u\n", 0, UCHAR_MAX);
    printf(line);
    printf("short int type info:\n");
    printf("size\t%lu\n", sizeof(var_sint));
    printf("between\t%d and %d\n", SHRT_MIN, SHRT_MAX);
    printf(line);
    printf("unsigned short int type info:\n");
    printf("size\t%lu\n", sizeof(var_usint));
    printf("between\t%u and %u\n", 0, USHRT_MAX);
    printf(line);
    printf("int type info:\n");
    printf("size\t%lu\n", sizeof(var_int));
    printf("between\t%d and %d\n", INT_MIN, INT_MAX);
    printf(line);
    printf("unsigned int type info:\n");
    printf("size\t%lu\n", sizeof(var_uint));
    printf("between\t%u and %u\n", 0, UINT_MAX);
    printf(line);
    printf("long int type info:\n");
    printf("size\t%lu\n", sizeof(var_lint));
    printf("between\t%ld and %ld\n", LONG_MIN, LONG_MAX);
    printf(line);
    printf("unsigned long int type info:\n");
    printf("size\t%lu\n", sizeof(var_ulint));
    printf("between\t%u and %lu\n", 0, ULONG_MAX);
    printf(line);
    printf("float type info:\n");
    printf("size\t%lu\n", sizeof(var_float));
    printf("between\t%e and %e\n", FLT_MIN, FLT_MAX);
    printf("digits\t%u\n", FLT_DIG);
    printf("epsilon\t%e\n", FLT_EPSILON);
    printf(line);
    printf("double type info:\n");
    printf("size\t%lu\n", sizeof(var_double));
    printf("between\t%e and %e\n", DBL_MIN, DBL_MAX);
    printf("digits\t%u\n", DBL_DIG);
    printf("epsilon\t%e\n", DBL_EPSILON);
    printf(line);
    printf("long double type info:\n");
    printf("size\t%lu\n", sizeof(var_ldouble));
    printf("between\t%Le and %Le\n", LDBL_MIN, LDBL_MAX);
    printf("digits\t%u\n", LDBL_DIG);
    printf("epsilon\t%Le\n", LDBL_EPSILON);
    printf(line);
    return 0;
}
