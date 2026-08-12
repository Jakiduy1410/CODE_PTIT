import sys

def calc(a):
    res = {}
    if a % 2 == 0:
        cnt = 0
        while a % 2 == 0:
            cnt += 1
            a //= 2
        res[2] = res.get(2,cnt)
    i = 3
    while i*i <= a:
        if a % i == 0:
            cnt = 0
            while a % i == 0:
                cnt += 1
                a //= i
            res[i] = res.get(i,cnt)
        i += 2
        
    if a > 1: 
        res[a] = res.get(a,1)
    return res


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a = int(next(it))
        res = calc(a)
        
       
        out_str = ' * '.join(f"{key}^{val}" for key, val in res.items())
        
        
        print(f"1 * {out_str}" if out_str else "1")

main()