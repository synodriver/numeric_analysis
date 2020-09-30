//
// Created by synodriver on 2020/9/29.
//
#include "py_fsolve.h"
double fsolve(Func func, double a0, double b0, double s,void* context)
{
    double x0 = (a0 + b0) / 2;
    double temp_a0, temp_x0;
    do
    {
        //printf("当前根是 %lf %lf\n", x0, func(x0,context));
        temp_a0 = func(a0,context);
        temp_x0 = func(x0,context);
        if (temp_x0 == 0)
        {
            //printf("%lf",func(x0));
            break;
        }
        if ((temp_a0 * temp_x0) < 0)
        {
            b0 = x0;
            x0 = (a0 + b0) / 2;
        }
        if ((temp_a0 * temp_x0) > 0)
        {
            a0 = x0;
            x0 = (a0 + b0) / 2;
        }

    } while (fabs(temp_x0) > s);
    return x0;
}