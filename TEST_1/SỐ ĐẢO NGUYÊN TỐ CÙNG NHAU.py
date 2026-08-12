import sys
from math import gcd

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = next(it).decode()
        z = n[::-1]
        print('YES' if gcd(int(n),int(z)) == 1 else 'NO')

main()