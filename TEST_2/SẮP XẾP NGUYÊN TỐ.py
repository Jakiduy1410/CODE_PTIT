import sys

def p(n):
    if n < 2:
        return False
    for i in range(2, int((n**0.5)) + 1):
        if n % i == 0:
            return False
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    b = [ch for ch in a if p(ch)]
    x = len(b)-1
    b.sort(reverse=True)
    for i in a:
        if not p(i):
            print(i,end=' ')
        else:
            print(b[x],end=' ')
            x -= 1
main()