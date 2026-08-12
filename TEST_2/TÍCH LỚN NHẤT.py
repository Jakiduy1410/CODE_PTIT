import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    am = []
    duong = []
    for _ in range(n):
        x = int(next(it))
        if x < 0:
            am.append(x)
        else:
            duong.append(x)
    am.sort(reverse=True)
    duong.sort()
    a = 0; b = 0
    if len(am) >= 2:
        a = am[-1] * am[-2]
        b = am[-1] * am[-2] * duong[-1]
    c = duong[-1] * duong[-2]
    d = duong[-1] * duong[-2] * duong[-3]
    
    ans = max(a,b,c,d)
    print(ans)
    

main()