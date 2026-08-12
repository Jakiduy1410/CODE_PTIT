import math

a,b = map(int,input().split())

res = []
for i in range(a,b+1):
    for j in range(i+1,b+1):
        if math.gcd(i,j) == 1:
            for k in range(j+1,b+1):
                if math.gcd(i,k) == 1 and math.gcd(j,k) == 1:
                    res.append(i)
                    res.append(j)
                    res.append(k)
                    print("(" + ", ".join(map(str,res))+")")
                    res = []
