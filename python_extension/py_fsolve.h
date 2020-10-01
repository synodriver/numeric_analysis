//
// Created by jhc on 2020/9/29.
//

#ifndef NUMERIC_ANALYZE_FSOLVE_H
#define NUMERIC_ANALYZE_FSOLVE_H

#include <math.h>
#include <stdio.h>

typedef double (*Func)(double x, void *context); // 这个context存粹是给py包装提供方便 老恶心了 下面那个也是 我呕……
// 同时所有的pyx pxd文件也需要跟着变
// https://github.com/cython/cython/tree/master/Demos/callback 我参考了这个
__declspec(dllexport) double fsolve(Func func, double a0, double b0, double s, void *context);
//前面的__declspec(dllexport)很重要，不然py找不到
__declspec(dllexport) double iterate_solve(Func func, double x0, double s, void *context); //迭代法
#endif //NUMERIC_ANALYZE_FSOLVE_H
