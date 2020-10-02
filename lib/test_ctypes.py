import ctypes

i = 1


def py_func(x: float) -> float:
    global i
    # print("判断 {0} 第{1}次数".format(x, i))
    i += 1
    return x ** 3 - x - 1


def iter_func(x: float) -> float:
    """

    :param x:
    :return:
    """
    print("迭代 {0}".format(x))
    return (x + 1) ** (1 / 3)


def diff_func(x: float) -> float:
    return x ** 2


ctypes.cdll.msvcrt.printf("好啊我是C语言的print\n".encode("gbk"))  # 加载微软的库
CFUNC = ctypes.WINFUNCTYPE(ctypes.c_double, ctypes.c_double)  # 包装类  输入double ,返回double
cfunc = CFUNC(py_func)  # 包装py函数为c函数

libc = ctypes.WinDLL(r".\fsolve.dll")  # c库
libc.fsolve.argtypes = [CFUNC, ctypes.c_double, ctypes.c_double, ctypes.c_double]
# 以上是从stackoverflow找到的
# https://stackoverflow.com/questions/43317409/ctypes-argumenterror-dont-know-how-to-convert-parameter
# 查死我了
libc.fsolve.restype = ctypes.c_double
# 以上根据stackoverflow自己感悟的 猜测他有argtypes就有restype 果然绝了 看这个文件 E:\Anaconda3\Lib\ctypes\__init__.py
# def CFUNCTYPE(restype, *argtypes, **kw):
data = libc.fsolve(cfunc, 0, 20, 0.00005)
print(data)

libc.iterate_solve.argtypes = [CFUNC, ctypes.c_double, ctypes.c_double]
libc.iterate_solve.restype = ctypes.c_double
print(libc.iterate_solve(CFUNC(iter_func), 1.5, 0.000005))

libc.diff.argtypes = [CFUNC, ctypes.c_double, ctypes.c_double]
libc.diff.restype = ctypes.c_double
print(libc.diff(CFUNC(diff_func), 1, 0.00001))
