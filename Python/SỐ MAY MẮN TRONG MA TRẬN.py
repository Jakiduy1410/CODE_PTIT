import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); m = int(next(it))
    a = [[int(next(it)) for _ in range(m)] for _ in range(n)]
    mx = -1
    mn = 1e9
    for i in range(n):
        for x in a[i]:
            if x > mx:
                mx = x
            if x < mn:
                mn = x
    tag = mx - mn
    cnt = 0
    found = False
    for i in range(n):
        for j in range(m):
            if a[i][j] == tag:
                found = True
                if cnt == 0:
                    print(tag)
                    cnt += 1
                print(f"Vi tri [{i}][{j}]")
    if not found:
        print("NOT FOUND")
    

main()