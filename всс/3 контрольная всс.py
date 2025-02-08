print("Введи свое число")
p = int(input())
print(f"p = {p} = n + 1")
print(f"n = {p-1}")
l = []
ans = ""
def create_mas(a,p):
    mas = []
    x0 = 1
    while mas.count((x0 * a) % p) != 1:
        mas.append((x0 * a) % p)
        x0 = (x0 * a) % p
    return mas
for j in range(2,100):
    o = create_mas(j,p);
    if len(o) == p-1:
        print(f"a = {j}")
        break
print(o)
for i in range(1,p):
    print(f"l({i}) = {o.index(i) + 1}")
    l.append(o.index(i) + 1)
for i in range(len(l)):
    print(f"l({i + 1}) = {l[i] % 2}")
    l[i] = l[i] % 2
print("Ответ:")
print(l)
for i in range(len(l)-1,-1,-1):
    if i != 0:
        print(l[-(i+1)] * 2 ** i,end=" + ")
    else:
        print(l[-(i+1)] * 2 ** i,end=" = ")
for i in l:
    ans += str(i)
print(int(ans,2))

