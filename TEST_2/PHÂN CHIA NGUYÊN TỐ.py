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
    a = list(dict.fromkeys(a))
    n = len(a)
    pre = [0] * (n+1)
    for i in range(1, n+1):
        pre[i] = pre[i-1] + a[i-1]
    ok = False
    for i in range(1, n):
        first = pre[i]
        last = pre[n] - pre[i]
        if p(first) and p(last):
            print(i-1)
            ok = True
            break
    if not ok:
        print('NOT FOUND')
    


main()
