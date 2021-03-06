//
// Created by synodriver on 2020/9/29.
//
#include "fsolve.h"

double fsolve(Func func, double a0, double b0, double s)
{
    double x0 = (a0 + b0) / 2;
    double temp_a0, temp_x0;
    do
    {
        // printf("当前根是 %lf %lf\n", x0, func(x0));
        temp_a0 = func(a0);
        temp_x0 = func(x0);
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
    }
    while (fabs(temp_x0) > s);
    return x0;
}

double iterate_solve(Func func, double x0, double s)
{
    double x1;  // k+1次的值
    while (1)
    {
        x1 = func(x0);
        if (fabs(x1 - x0) < s)
        {
            break;
        }
        else
        {
            x0 = x1;
        }
    }
    return x1;
}

double diff(Func func, double x0, double dx)
{
    double x_left = x0 - dx / 2.0;
    double x_right = x0 + dx / 2.0;
    return (func(x_right)-func(x_left))/dx;
}