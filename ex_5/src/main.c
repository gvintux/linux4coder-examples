#include <stdio.h>
#include <math.h>
#include <float.h>

unsigned long fct(unsigned int n)
{
	if (n == 1 || n == 0) return 1;
	return n * fct(n - 1);
}

double myexp(double x, double eps)
{
	double result = 0;
	unsigned int i;
	for (i = 0; ;i++)
	{
		double r = pow(x, i) / fct(i);
		if (fabs(r) <= eps) break;
		result += r;
	}
	return result;
}

int main()
{
	double x, eps;
	printf("x = ");
	scanf("%lf", &x);
	printf("eps = ");
	scanf("%lf", &eps);
	printf("exp(%g) = %0.*g\n",x, DBL_DIG, myexp(x, eps));
	return 0;
}
