import sys

def prime(n):
    if n < 2:
        return False
    for i in range(2,int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)

    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    b = {}
    for x in a:
        b[x] = b.get(x,0) + 1
    ans = list(b.keys())
    pre = [0] * (len(b) + 1)
    #print(*ans)
    for i in range(len(ans)):
        pre[i+1] = pre[i] + ans[i]
    found = False
    for i in range(1,len(pre)):
        prev = pre[i]
        pos = pre[-1] - pre[i]
        if prime(prev) and prime(pos):
            print(i-1)
            found = True
            break
    if not found:
        print("NOT FOUND")

main()