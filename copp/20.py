a = int(input())
st = input()
st1 = ""
def f(st,st1):
    for i in range(len(st)):
        if st[i] == "*":
            continue
        elif st[i] == st1[i]:
            continue
        else:
            return("IMPOSSIBLE")
    return st1
if st[0] == "a":
    for i in range(len(st)):
        if i % 2 == 0:
            st1 += "a"
        else:
            st1 += "b"
    print(f(st,st1))
elif st[0] == "b":
    for i in range(len(st)):
        if i % 2 == 0:
            st1 += "b"
        else:
            st1 += "a"
    print(f(st,st1))
else:
    for i in range(len(st)):
        if i % 2 == 0:
            st1 += "b"
        else:
            st1 += "a"
    ans = f(st,st1)
    if ans == "IMPOSSIBLE":
        st1 = st1[::-1]:
        print(f(st,st1))
    else:
        print(ans)


