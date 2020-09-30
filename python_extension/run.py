from fsolve import fsolve

i = 1


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


# 改进前93次调用func
# 改进后39
print(fsolve(py_func, 0, 20, 0.00005))
