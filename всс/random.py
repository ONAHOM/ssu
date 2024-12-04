from math import *
a = int(input())
simpl = []
x0 = 1
inter = []
rang = []
for i in range(1,a+1):
    if gcd(i,a) == 1:
        simpl.append(i)
cycle_diagram = []
while True:
    if cycle_diagram.count((2 * x0) % a) == 1:
        break
    cycle_diagram.append((2 * x0) % a)
    x0 = (2 * x0) % a
cycle_diagram.sort()
for i in range(len(cycle_diagram)):
    for j in range(len(simpl)):
        if cycle_diagram[i] == simpl[j]:
            inter.append(j)
for i in range(len(inter)-1):
    rang.append((inter[i+1] - inter[i])**2)
rang.append((len(simpl) - inter[-1])**2)
rang = sum(rang)
r = rang / len(simpl) ** 2
print(f"Г({a}) = {simpl}")
print(f"Ф({a}) = {len(simpl)}")
print(f"Числа которые нужно обвести в кружок {cycle_diagram}")
print(f"R = {rang }")
print(f"T = {len(cycle_diagram)}")
print(f"r = {r}")
print(f"S = {r * len(cycle_diagram)}")

