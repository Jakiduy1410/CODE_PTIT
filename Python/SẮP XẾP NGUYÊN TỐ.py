import sys

def prime(n):
    if n < 2:
        return False
    for i in range(2,int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    p = [x for x in a if prime(x)]
    p.sort()
    pos = 0
    for x in a:
        if not prime(x):
            print(x,end=" ")
        else:
            print(p[pos],end=" ")
            pos += 1
    

main()
