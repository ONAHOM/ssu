from math import *
a = int(input())
if (a >= 7):
    for i in range(ceil(a/2) + 1,0,-1):
        for j in range(ceil(a/2) + 1,0,-1):
            if (i == j):
                break
            for k in range(ceil(a/2) + 1,0,-1):
                if (k == i) or (k == j):
                    break
                if (((i + j + k) == a) and (i % 3 != 0) and (j%3 != 0) and (k%3 != 0)):
                    print("YES")
                    print(i,j,k)
                    exit()
print("NO")
