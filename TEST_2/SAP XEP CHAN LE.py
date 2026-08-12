import sys

def main():
    data = list(map(int, sys.stdin.buffer.read().split()))
    n = data[0]
    a = data[1:1+n]

    odd = sorted([x for x in a if x % 2 == 1], reverse=True)
    even = sorted([x for x in a if x % 2 == 0])

    io = ie = 0
    res = []
    for x in a:
        if x % 2 == 1:
            res.append(odd[io]); io += 1
        else:
            res.append(even[ie]); ie += 1

    print(*res)

if __name__ == "__main__":
    main()
