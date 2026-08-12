import sys
from bisect import bisect_left

PRIMES = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
LIMIT = 10**12

cands = []

def dfs(idx, last_exp, n, divs):
    cands.append((n, divs))
    if idx == len(PRIMES):
        return
    p = PRIMES[idx]
    nn = n
    for e in range(1, last_exp + 1):
        nn *= p
        if nn > LIMIT:
            break
        dfs(idx + 1, e, nn, divs * (e + 1))

dfs(0, 60, 1, 1)
cands.sort()

anti = []
best = 0
for n, d in cands:
    if d > best:
        anti.append(n)
        best = d

def main():
    data = sys.stdin.buffer.read().split()
    if not data:
        return
    t = int(data[0])
    out = []
    j = 1
    for _ in range(t):
        x = int(data[j]); j += 1
        i = bisect_left(anti, x)
        out.append(str(anti[i]))
    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    main()