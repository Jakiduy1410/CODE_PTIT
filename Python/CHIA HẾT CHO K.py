

a,k,n = map(int,input().split())
pos = n - a
res = []
for i in range(1,pos):
    if (i + a) % k == 0:
        res.append(i)
if not res:
    print(-1)
else:
    res.sort()
    for i in res:
        print(i, end=" ")
