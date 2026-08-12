from itertools import combinations
import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); k = int(next(it))
    a = []
    for _ in range(n):
        s = next(it).decode().strip()
        a.append(s)
    a = set(a)
    a = sorted(a, key=lambda x: x)
    for comb in combinations(a,k):
        print(' '.join(comb))
    

main()

