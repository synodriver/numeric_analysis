//
// Created by synodriver on 2020/9/29.
//
#include "fsolve.h"
double fsolve(Func func, double a0, double b0, double s)
{
    double x0 = (a0 + b0) / 2;
    do
    {
        printf("当前根是 %lf %lf\n", x0, func(x0));
        if (func(x0) == 0)
        {
            //printf("%lf",func(x0));
            break;
        }
        if ((func(a0) * func(x0)) < 0)
        {
            b0 = x0;
            x0 = (a0 + b0) / 2;
        }
        if ((func(a0) * func(x0)) > 0)
        {
            a0 = x0;
            x0 = (a0 + b0) / 2;
        }

    } while (fabs(func(x0)) > s);
    return x0;
}