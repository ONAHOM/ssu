from itertools import *
a = int(input())
b = []
c = []
for i in range(a):
    b.append(list(map(int, input().split())))
for i,j in combinations(b,2):
    c.append(abs(i[0] - j[0]) + abs(i[1] - j[1]))
print(sum(c))
