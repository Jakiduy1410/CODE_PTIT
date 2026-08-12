def sieve_1000():
    p = [True] * 1001
    p[0] = p[1] = False
    for i in range(2, int(1000**0.5) + 1):
        if p[i]:
            for j in range(i*i, 1001, i):
                p[j] = False
    return p

def main():
    is_prime = sieve_1000()
    n, m = map(int, input().split())
    for _ in range(n):
        row = list(map(int, input().split()))
        out = [1 if is_prime[x] else 0 for x in row]
        print(*out)

if __name__ == "__main__":
    main()
