a = input()
b = list(map(int,input().split()))
sm = []
for i in range(0,len(b)):
    c = b.copy()
    c.pop(i)
    sm.append(sum([c[j] for j in range(0,len(c),2)]))
print(max(sm))
