//
// Created by jhc on 2020/9/29.
//

#ifndef NUMERIC_ANALYZE_FSOLVE_H
#define NUMERIC_ANALYZE_FSOLVE_H

#include <math.h>
#include <stdio.h>

typedef double (*Func)(double x);

// 二分法求解函数 func是待求解函数 a0 b0是求解区间 s是限制误差
__declspec(dllexport) double fsolve(Func func, double a0, double b0, double s);   //前面的__declspec(dllexport)很重要，不然py找不到

// func是迭代函数 x0是给定初始值 s是限定误差
__declspec(dllexport) double iterate_solve(Func func, double x0, double s); //迭代法

//导数  其实是非分之赏  求func在x0 领域的导数 dx是微分大小
__declspec(dllexport) double diff(Func func, double x0, double dx);

#endif //NUMERIC_ANALYZE_FSOLVE_H
