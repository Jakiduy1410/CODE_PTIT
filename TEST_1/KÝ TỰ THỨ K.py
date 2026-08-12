import sys

def solve(n, k):
    mid = 2 ** (n - 1)
    if k == 1 or n == 1:
        return 'A'
    if k == mid:
        return chr(ord('A') + n - 1)
    if k > mid:
        return solve(n - 1, k - mid)
    return solve(n - 1, k)

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); k = int(next(it))
        print(solve(n,k))

main()