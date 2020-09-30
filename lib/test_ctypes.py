import ctypes


def py_func(x: float) -> float:
    return x ** 3 - x - 1


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
data = libc.fsolve(cfunc, 1, 2, 0.00005)
print(data)
