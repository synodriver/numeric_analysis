from fsolve cimport fsolve as _fsolve

cdef double callback(double c,void* f):
    return (<object>f)(c)

def fsolve(f,double a0:float,double b0:float,double s:float)->float:
    """
    f是待求解方程,a0,b0是求解区间,a0<b0,s是允许误差
    """
    return _fsolve(callback,a0,b0,s,<void*>f)