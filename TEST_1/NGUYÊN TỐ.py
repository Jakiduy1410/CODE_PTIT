import sys
import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def main():
    data = sys.stdin.read().split()
    if not data:
        return
    
    t = int(data[0])
    for i in range(1, t + 1):
        n = int(data[i])
        k = 0
        for j in range(1, n):
            if math.gcd(n, j) == 1:
                k += 1
                
        if is_prime(k):
            print("YES")
        else:
            print("NO")

if __name__ == '__main__':
    main()