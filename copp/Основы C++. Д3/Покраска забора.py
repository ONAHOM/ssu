n,m = map(int, input().split())
s = n - m + 1
if m == 1:
    print(s)
    exit()
i = m + m - 1
while((n - i + 1) >= 0):
    s += (n - i + 1)
    i = i + m - 1
print(s)
