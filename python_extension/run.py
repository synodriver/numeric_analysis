import fsolve
from typing import Callable
import time

i = 1


def iterate_solve(func: Callable[[float], float], x0: float, s: float):
    while True:
        x1 = func(x0)
        if abs(x1 - x0) < s:
            break
        else:
            x0 = x1
    return x1


def py_func(x: float) -> float:
    """
    这种方式传进去的函数断点不会命中
    猜猜这是为什么？
    :param x:
    :return:
    """
    global i
    print("判断 {0} 第{1}次数".format(x, i))
    i += 1
    return x ** 3 - x - 1


def iter_func(x):
    """

    :param x:
    :return:
    """
    # print("迭代 {0}".format(x))
    return (x + 1) ** (1 / 3)


# 改进前93次调用func
# 改进后40
# print(fsolve(py_func, 0, 20, 0.00005))

start = time.time()
for _ in range(1000000):
    iterate_solve(iter_func, 1.5, 0.000005)
print("python build")
print("求解1000000次 消耗时间 {0}".format(time.time() - start))  # 速度是c语言的 1/8 因为回调是py写的   c0.7 py4.10
# print(iterate_solve(iter_func, 1.5, 0.000005))
start = time.time()
for _ in range(1000000):
    fsolve.iterate_solve(iter_func, 1.5, 0.000005)
print("cython build")
print("求解1000000次 消耗时间 {0}".format(time.time() - start))