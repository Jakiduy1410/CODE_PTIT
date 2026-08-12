import sys


def main():
    data = sys.stdin.read().strip().split()
    if not data:
        return
    it = iter(data)
    n = int(next(it))
    m = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    b = [int(next(it)) for _ in range(m)]

    A = sorted(set(a))
    B = sorted(set(b))

    x = [str(x) for x in A if x in B]
    y = [str(x) for x in A if x not in B]
    z = [str(x) for x in B if x not in A]

    print(" ".join(x))
    print(" ".join(y))
    print(" ".join(z))

main()
