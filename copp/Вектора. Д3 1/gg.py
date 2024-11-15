from sys import *
setrecursionlimit(999999999)

def f(i):
    s = 1 * i

    if i == 1:
        return s
    print(s)
    return f(i - 1) * s

print(f(int(input())))
