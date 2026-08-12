n=int(input())
a=[input().strip() for _ in range(n)]
res=0
for r in a:
    c=r.count('C')
    res+=c*(c-1)//2
for j in range(n):
    c=sum(1 for i in range(n) if a[i][j]=='C')
    res+=c*(c-1)//2
print(res)
