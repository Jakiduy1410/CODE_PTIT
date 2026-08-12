import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); m = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    b = [int(next(it)) for _ in range(m)]
    st1 = set(a)
    st2 = set(b)
    for x in a:
        if x in st2:
            print(x,end=" ")
    print()
    for x in a:
        if x not in st2:
            print(x, end=" ")
    print()
    for x in b:
        if x not in st1:
            print(x,end=" ")
main()