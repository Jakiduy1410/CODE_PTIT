import math

def prime(a) -> bool:
    if a < 2:
        return False
    for i in range(2, int(a**0.5)+1, 1):
        if a % i == 0:
            return False
    return True

t = int(input())
for _ in range(t):
    a,b = map(int, input().split())
    c = math.gcd(a,b)
    sum_c = 0
    while c > 0:
        sum_c += (c % 10)
        c //= 10
    print("YES" if prime(sum_c) else "NO")