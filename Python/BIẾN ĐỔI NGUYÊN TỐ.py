import sys
from bisect import bisect_left

p = [True]*10011
primes = []

def seive(limits = 10010):
    p[0] = p[1] = False
    for i in range(2,int(limits**0.5) + 1):
        for j in range(i*i,limits + 1, i):
            p[j] = False
    for i in range(limits+1):
        if p[i]:
            primes.append(i)
def main():
    seive()
    data = sys.stdin.buffer.read().split()
    it = iter(data)

    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    ans = 0
    for x in a:
        if p[x]:
            continue
        
        idx = bisect_left(primes,x)
        up = primes[idx]
        down = primes[idx-1] if idx >= 1 else -99999

        step = min(abs(up - x) , abs(down - x))
        ans = max(ans,step)
    print(ans)



main()