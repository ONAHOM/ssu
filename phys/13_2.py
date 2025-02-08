from random import *
from math import *

l1 = [[24]]
l2 = [[26]]
l3 = [[22]]
lamb = []
v = []
print("№\tNU\tl1\tl2\tn\tlambda\tV\tVср\t|V|\tV0\tразница табличного и вашего")
for i in range(1,10):
    if i <= 3:
        sr = 12
        nu = 1400
        l1[i-1].append(l1[i-1][0] + round(uniform(sr - 1, sr + 1),2))
        la = round((2 * (l1[i-1][1] - l1[i-1][0]) / 100),3)
        lamb.append(la)
        v.append(lamb[i-1] * nu)
        l1.append([l1[i-1][1] + round(uniform(sr -1, sr + 1),2)])
    elif i <= 6:
        sr = 10
        nu = 1600
        l2[i-4].append(l2[i-4][0] + round(uniform(sr - 1, sr + 1),2))
        lamb.append(round((2 * (l2[i-4][1] - l2[i-4][0]) / 100),3))
        v.append(lamb[i-1] * nu)
        l2.append([l2[i-4][1] + round(uniform(sr -2, sr + 2),2)])
    else:
        sr = 8
        nu = 2000
        l3[i-7].append(l3[i-7][0] + round(uniform(sr - 1, sr + 1),2))
        lamb.append(round((2 * ((l3[i-7][1] - l3[i-7][0]) / 100)),3))
        v.append(lamb[i-1] * nu)
        l3.append([l3[i-7][1] + round(uniform(sr -1, sr + 1),2)])
vsr = [round(sum(v[0:3])/3,2),round(sum(v[3:6])/3,2),round(sum(v[6:])/3,3)]
for i in range(1,10):
    if i <= 3:
        nu = 1400
        v_zero = round(v[i-1] / sqrt(1 + 0.004 * 23),2)
        print(f"{i}\t{nu}\t{round(l1[i-1][0],2)}\t{round(l1[i-1][1],2)}\t1\t{round(lamb[i-1],2)}\t{round(v[i-1],2)}\t{round(vsr[0],2)}\t{round(abs(v[i-1] - vsr[0]),2)}\t{v_zero}\t{round(abs(331.46-v_zero),2)}")
    elif i <= 6:
        nu = 1600
        v_zero = round(v[i-1] / sqrt(1 + 0.004 * 23),2)
        print(f"{i}\t{nu}\t{round(l2[i-4][0],2)}\t{round(l2[i-4][1],2)}\t1\t{round(lamb[i-1],2)}\t{round(v[i-1],2)}\t{round(vsr[1],2)}\t{round(abs(v[i-1] - vsr[1]),2)}\t{v_zero}\t{round(abs(331.46-v_zero),2)}")
    else:
        nu = 2000
        v_zero = round(v[i-1] / sqrt(1 + 0.004 * 23),2)
        print(f"{i}\t{nu}\t{round(l3[i-7][0],2)}\t{round(l3[i-7][1],2)}\t1\t{round(lamb[i-1],2)}\t{round(v[i-1],2)}\t{round(vsr[2],2)}\t{round(abs(v[i-1] - vsr[2]),2)}\t{v_zero}\t{round(abs(331.46-v_zero),2)}")
