from math import *
a=[1,1,2,3,2,4,5]
b=[2,6,12,18,4,8,10]

for i in range(len(a)):
    x=gcd(a[i],b[i])
    a[i]=int(a[i]/x)
    b[i]=int(b[i]/x)

d={}
for i in range(len(a)):
    s=str(a[i])+'/'+str(b[i])
    if s in d:
        d[s]=d[s]+1
    else:
        d[s]=1

max=0
for i in d.values():
    if max<i:
        max=i

print(max)