import sys

def main():
    data = sys.stdin.read().split()
    if not data:
        return
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        p = int(next(it))
        
        ans = 0
        while n > 0:
            ans += n // p
            n //= p
        print(ans)

main()