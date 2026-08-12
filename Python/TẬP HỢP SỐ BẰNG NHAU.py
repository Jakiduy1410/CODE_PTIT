import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); m = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    b = [int(next(it)) for _ in range(m)]

    st1 = sorted(set(a))
    st2 = sorted(set(b))
    print("YES" if st1 == st2 else "NO")

main()