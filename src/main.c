#include <stdio.h>
#include <math.h>
#include "fsolve.h"
double function(double x)
{
    printf("���� %lf\n",x);
    return pow(x, 3) - x - 1;
}
int main()
{
    Func func = &function;
//printf("%lf",function(10.0));
    double a0, b0, s, x0;
//int n=1;

    printf("�����������\n");
    scanf("%lf %lf", &a0, &b0);
    printf("�����������ֵ\n");
    scanf("%lf", &s);
    x0 = fsolve(func, a0, b0, s);
    printf("����%lf\n", x0);
    printf("%lf\n", func(x0));
    return 0;
}
