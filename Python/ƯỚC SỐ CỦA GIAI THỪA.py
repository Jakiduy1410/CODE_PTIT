import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); k = int(next(it))
        cnt = 0
        while n > 0:
            cnt += (n // k)
            n //= k
        print(cnt)

main()