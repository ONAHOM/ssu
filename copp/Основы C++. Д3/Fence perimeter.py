a = input()
b = list(map(int, input().split()))
low = len(b) * 2
right = b[-1]
left = 0
b.insert(0,0)
for i in range(1,len(b)):
    left += abs(b[i] - b[i-1])
print(low + right + left)
#piska
