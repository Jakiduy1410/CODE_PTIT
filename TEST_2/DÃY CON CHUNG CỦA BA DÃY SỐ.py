import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); m = int(next(it)); k = int(next(it))
        a = [int(next(it)) for _ in range(n)]
        b = [int(next(it)) for _ in range(m)]
        c = [int(next(it)) for _ in range(k)]
        x,y,z = 0,0,0
        ok=False
        while x < n and y < m and z < k:
            if a[x] == b[y] == c[z]:
                print(a[x], end=" ")
                ok = True
                x += 1
                y += 1
                z += 1
                continue
            mn = min(a[x], b[y], c[z])
            if a[x] == mn:
                x += 1
            if b[y] == mn:
                y += 1
            if c[z] == mn:
                z += 1
        if not ok:
            print('NO')
        print()
        
main()
