
import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        a = [int(next(it)) for _ in range(n)]
        mn = min(a)
        mx = max(a)
        a.sort()
        pos,tmp = 0,mn
        cnt = 0
        while pos < len(a):
            if tmp < a[pos]:
                cnt += (a[pos] - tmp)
                tmp = a[pos] + 1
            elif tmp == a[pos]:
                tmp += 1
            pos += 1
        print(cnt)
main()