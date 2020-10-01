#include <stdio.h>
#include <math.h>
#include "fsolve.h"

double function(double x)
{
//    printf("���� %lf\n",x);
    return pow(x, 3) - x - 1;
}

double function2(double x)
{
    double ret = pow((x + 1), 1.0 / 3);
    printf("���� %lf  ����%lf \n", x, ret);
    return ret;
}

int main()
{
    Func func = &function;
    Func func2 = &function2;
//printf("%lf",function(10.0));
    double a0, b0, s, x0;
//int n=1;

    printf("�����������\n");
    scanf_s("%lf %lf", &a0, &b0);
    printf("�����������ֵ\n");
    scanf_s("%lf", &s);
    x0 = fsolve(func, a0, b0, s);
    printf("����%lf\n", x0);
    printf("%lf\n", func(x0));
    printf("���Ե�����\n");
    printf("��ʼֵ�����\n");
    scanf_s("%lf %lf", &x0, &s);
    double jie = iterate_solve(func2, x0, s);
    printf("������������� %lf \n", jie);

    return 0;
}
