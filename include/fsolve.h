//
// Created by jhc on 2020/9/29.
//

#ifndef NUMERIC_ANALYZE_FSOLVE_H
#define NUMERIC_ANALYZE_FSOLVE_H

#include <math.h>
#include <stdio.h>

typedef double (*Func)(double x);

__declspec(dllexport) double fsolve(Func func, double a0, double b0, double s);   //前面的__declspec(dllexport)很重要，不然py找不到

#endif //NUMERIC_ANALYZE_FSOLVE_H
