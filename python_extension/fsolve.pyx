from fsolve cimport fsolve as _fsolve
from fsolve cimport iterate_solve as _iterate_solve
from fsolve cimport diff as _diff

cdef double callback(double c, void*f):
    return (<object> f)(c)

def fsolve(f, double a0: float, double b0: float, double s: float)-> float:
    """
    f是待求解方程,a0,b0是求解区间,a0<b0,s是允许误差
    """
    return _fsolve(callback, a0, b0, s, <void*> f)

def iterate_solve(f, double x0, double s)-> float:
    """
    f是迭代方程,x0是迭代初始值,s是允许误差
    """
    return _iterate_solve(callback, x0, s, <void*> f)

def diff(f,double x0,double dx)->float:
    """
    数值导数
    :param f: 求导函数
    :param x0: x0领域
    :param dx: 微分值
    :return: 导数
    """
    return _diff(callback,x0,dx,<void*>f)