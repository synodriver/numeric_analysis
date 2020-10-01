# cython: language_level=3
cdef extern from "py_fsolve.h":
    ctypedef double (*Func)(double x,void* context);
    double fsolve(Func func, double a0, double b0, double s,void* context);
    double iterate_solve(Func func, double x0, double s, void *context);