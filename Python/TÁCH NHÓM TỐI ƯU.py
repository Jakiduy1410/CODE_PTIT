import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n,k = int(next(it)), int(next(it))
    a = [int(next(it)) for _ in range(n)]
    cnt = 1
    a.sort()
    for i in range(1,len(a)):
        if a[i] - a[i-1] > k:
            cnt += 1
    print(cnt)

main()