
def prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def phi(n):
    res = n
    p = 2
    while p*p <= n:
        if n % p == 0:
            res -= (res // p)
            while n % p == 0:
                n //= p
        p += 1
    if n != 1:
        res -= (res // n)
    return res

t = int(input())
while t > 0:
    n = int(input())
    cnt = phi(n)

    if(prime(cnt)):
        print("YES")
    else:
        print("NO")
    t -= 1