import sys

def solve(n,k):
    res = ''
    while n > 0:
        tmp = n % k
        if tmp < 10:
            res += str(tmp)
        else:
            res += chr(ord('A') + (tmp - 10))

        n //= k
    return res[::-1]

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); k = int(next(it))
        print(solve(n,k))

main()