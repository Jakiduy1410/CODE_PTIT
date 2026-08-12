import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    a = [[] for _ in range(n)]
    for i in range(n):
        a[i] = [int(next(it)) for _ in range(n)]
    k = int(next(it))
    up,down = 0,0
    for i in range(n):
        for j in range(n):
            if i > j:
                up += a[i][j]
            elif i < j:
                down += a[i][j]
    print('YES' if abs(up-down) <= k else 'NO')
    print(abs(up-down))

main()
    