import sys

def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    m = int(next(it))
    a = [[] for _ in range(n)]
    for i in range(n):
        a[i] = [int(next(it)) for _ in range(m)]

    max_prime = -1
    for i in range(n):
        for j in range(m):
            if is_prime(a[i][j]) and a[i][j] > max_prime:
                max_prime = a[i][j]

    if max_prime == -1:
        print("NOT FOUND")
    else:
        print(max_prime)
        for i in range(n):
            for j in range(m):
                if a[i][j] == max_prime:
                    print(f"Vi tri [{i}][{j}]")

main()
