import sys

def check(x):
    s = str(x)
    if len(s) < 2:
        return False
    return s == s[::-1]

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); m = int(next(it))
    a = [[int(next(it)) for _ in range(m)] for _ in range(n)]
    mx = -1
    for i in range(n):
        for x in a[i]:
            if check(x):
                if mx < x:
                    mx = x
    if mx == -1:
        print("NOT FOUND")
        return
    print(mx)
    for i in range(n):
        for j in range(m):
            if mx == a[i][j]:
                print(f"Vi tri [{i}][{j}]")

main()