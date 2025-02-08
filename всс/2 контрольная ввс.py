from math import *
a = int(input())
simpl = []
x0 = 1
index = []
distances = []
stochasticity_parameter = 0
#Все взаимно простые числа
for i in range(1,a+1):
    if gcd(i,a) == 1:
        simpl.append(i)
cycle_diagram = []
#Числа входящие в циклическую диаграму
while True:
    if cycle_diagram.count((2 * x0) % a) == 1:
        break
    cycle_diagram.append((2 * x0) % a)
    x0 = (2 * x0) % a
cycle_diagram.sort()
#Поиск индексов элементов из циклической диаграм в взаимно простых числах для подсчета растояний между ними
for i in range(len(cycle_diagram)):
    for j in range(len(simpl)):
        if cycle_diagram[i] == simpl[j]:
            index.append(j)
#Растояния
for i in range(len(index)-1):
    distances.append(index[i+1] - index[i])
#Растояние между последним членом циклической диаграмы и первым
distances.append(len(simpl) - index[-1])
#Подсчет параметра стохастичности
for i in distances:
    stochasticity_parameter += i**2
#Нормализованный параметр стохастичности
r = stochasticity_parameter / len(simpl) ** 2
#Бинормализванный параметр стохастичности
S = r * len(cycle_diagram)
print(f"Г({a}) = {simpl}")
print(f"Ф({a}) = {len(simpl)}")
print(f"Числа которые нужно обвести в кружок {cycle_diagram}")
print(f"R = {distances}(все числа отcюда записать как сумму квадратов этих чисел) = {stochasticity_parameter}")
print(f"T = {len(cycle_diagram)}")
print(f"r = {stochasticity_parameter} / {len(simpl)} ** 2 = {r}")
print(f"S = ({stochasticity_parameter} / {len(simpl)} ** 2) * {len(cycle_diagram)} = {S}")

