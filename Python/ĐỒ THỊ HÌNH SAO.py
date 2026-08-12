import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    mp = dict()
    for _ in range(n-1):
        u = int(next(it))
        v = int(next(it))
        mp[u] = mp.get(u,0) + 1
        mp[v] = mp.get(v,0) + 1
    mp = sorted(mp.items() , key=lambda x: -x[1])
    mx = mp[0][1]
    check = True
    if mx != (n-1):
        check = False
    else:
        for i in range(1,len(mp)):
            if mp[i][1] != 1:
                check = False
    if check:
        print("Yes")
    else:
        print("No")
        



main()
