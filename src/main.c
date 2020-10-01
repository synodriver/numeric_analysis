#include <stdio.h>
#include <math.h>
#include "fsolve.h"

double function(double x)
{
//    printf("调用 %lf\n",x);
    return pow(x, 3) - x - 1;
}

double function2(double x)
{
    double ret = pow((x + 1), 1.0 / 3);
    printf("调用 %lf  返回%lf \n", x, ret);
    return ret;
}

int main()
{
    Func func = &function;
    Func func2 = &function2;
//printf("%lf",function(10.0));
    double a0, b0, s, x0;
//int n=1;

    printf("输入求解区间\n");
    scanf_s("%lf %lf", &a0, &b0);
    printf("输入允许误差值\n");
    scanf_s("%lf", &s);
    x0 = fsolve(func, a0, b0, s);
    printf("根是%lf\n", x0);
    printf("%lf\n", func(x0));
    printf("测试迭代法\n");
    printf("初始值和误差\n");
    scanf_s("%lf %lf", &x0, &s);
    double jie = iterate_solve(func2, x0, s);
    printf("迭代法求解结果是 %lf \n", jie);

    return 0;
}
