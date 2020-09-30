from fsolve import fsolve


def py_func(x: float) -> float:
    """
    这种方式传进去的函数断点不会命中
    猜猜这是为什么？
    :param x:
    :return:
    """
    return x ** 3 - x - 1


print(fsolve(py_func, 1, 2, 0.00005))
