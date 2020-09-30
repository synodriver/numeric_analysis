//
// Created by synodriver on 2020/9/29.
//
#include "py_fsolve.h"
double fsolve(Func func, double a0, double b0, double s,void* context)
{
    double x0 = (a0 + b0) / 2;
    do
    {
        printf("当前根是 %lf %lf\n", x0, func(x0,context));
        if (func(x0,context) == 0)
        {
            //printf("%lf",func(x0));
            break;
        }
        if ((func(a0,context) * func(x0,context)) < 0)
        {
            b0 = x0;
            x0 = (a0 + b0) / 2;
        }
        if ((func(a0,context) * func(x0,context)) > 0)
        {
            a0 = x0;
            x0 = (a0 + b0) / 2;
        }

    } while (fabs(func(x0,context)) > s);
    return x0;
}