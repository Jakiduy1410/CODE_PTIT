import sys
from math import gcd

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); k = int(next(it))
        a = [int(next(it)) for _ in range(n)]

        res = []
        ans = 1e9
        for x in a:
            dp = [(x,1)]
            for num,len_num in res:
                ucln = gcd(num,x)
                len_tmp = len_num + 1
                if dp[-1][0] == ucln:
                    dp[-1] = (ucln, min(len_tmp, dp[-1][1]))
                else:
                    dp.append((ucln,len_tmp))

            for n,l in dp:
                if n == k:
                    ans = min(ans,l)
            res = dp
        
        for num,len_num in res:
                if num == k:
                    ans = min(ans,len_num)
        print(ans if ans != 1e9 else -1)

main()