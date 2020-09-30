from setuptools import setup, Extension
from Cython.Build import cythonize

ext_modules = [
    Extension("fsolve",
              sources=["fsolve.pyx", "py_fsolve.c"]
              )
]

setup(name="fsolve",
      ext_modules=cythonize(ext_modules))
