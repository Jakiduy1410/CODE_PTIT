import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    b = [[int(next(it)) for _ in range(n)] for _ in range(n)]
    k = int(next(it))
    up,down = 0,0
    for i in range(n):
        for j in range(n):
            if j > i:
                up += b[i][j]
            elif i > j:
                down += b[i][j]
    res = abs(up - down)
    if res > k:
        print("NO")
        print(res)
    else:
        print("YES")
        print(res)

main()