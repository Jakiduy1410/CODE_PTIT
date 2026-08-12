import sys

from itertools import combinations

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); k = int(next(it))
    s = set(list(next(it).decode() for _ in range(n)))
    s = sorted(s)
    for i in combinations(s,k):
        print(" ".join(i))
    

main()