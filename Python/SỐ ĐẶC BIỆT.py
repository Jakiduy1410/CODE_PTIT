import sys
MOD = 10**9 + 7
def calc(n,s):
    res = 0
    for pos,ch in enumerate(s):
        if ch == '1':
            res += ((n**pos) % MOD)
    return res % MOD


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); k = int(next(it))
        s = bin(k)[2:]
        s = s[::-1]
        print(calc(n,s))

        #print(calc(n,k))

main()