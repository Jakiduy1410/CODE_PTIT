import sys

def check(x,y):
    cnt = 0
    while x * 2 <= y:
        cur = x*2
        if cur < y:
            cnt += 1
        x = cur
    return cnt

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        a = [int(next(it)) for _ in range(n)]
        cnt = 0
        for i in range(n-1):
            mn = min(a[i] , a[i+1])
            mx = max(a[i], a[i+1])
            cnt += check(mn,mx)
        print(cnt)

main()