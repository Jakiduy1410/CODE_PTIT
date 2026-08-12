import sys

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        n,k = map(int,data.readline().split())
        a = list(map(int,data.readline().split()))
        mx = max(a)
        pos = a.index(mx)
        res = a[:pos] + [k] + a[pos:]
        neg = [x for x in res if x < 0]
        posi = [x for x in res if x >= 0]
        print(*neg,*posi)

if __name__ == "__main__":
    main()