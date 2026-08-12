import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    a.sort()
    found = False
    start = 1
    for x in a:
        if start < x:
            while start < x:
                print(start)
                found = True
                start += 1
            start += 1
            continue
        else:
            start += 1
            continue
    if not found:
        print("Excellent!")

main()