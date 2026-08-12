import sys
MAXN = 1013
p = [True] * MAXN

def seive():
    p[0] = p[1] = False
    for i in range(2,int(MAXN**0.5) + 1):
        for j in range(i*i,MAXN,i):
            p[j] = False
    return p

def main():
    data = sys.stdin.buffer.read().split()
    seive()
    it = iter(data)
    n = int(next(it)); m = int(next(it))
    a = [[int(next(it)) for _ in range(m)] for _ in range(n)]
    mx = -1
    for i in range(n):
        for x in a[i]:
            if p[x]:
                if mx < x:
                    mx = x
    if mx == -1:
        print("NOT FOUND")
        return
    print(mx)
    for i in range(n):
        for j in range(m):
            if a[i][j] == mx:
                print(f"Vi tri [{i}][{j}]")

main()