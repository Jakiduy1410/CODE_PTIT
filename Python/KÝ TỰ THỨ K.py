import sys

def bt(n, k, size):
    if n == 0:
        return 'A'
    mid = (1 << (n - 1))   

    if k == mid:
        return chr(ord('A') + (n-1))
    if k > mid:
        return bt(n - 1, k - mid, (1 << (n - 1)) - 1)
    else:  
        return bt(n - 1, k, (1 << (n - 1)) - 1)

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); k = int(next(it))
        size = (1 << n) - 1
        print(bt(n, k, size))

main()
