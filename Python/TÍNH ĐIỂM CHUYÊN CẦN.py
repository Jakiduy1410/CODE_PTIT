import sys

class HS:
    def __init__(self, msv, name, lop):
        self.name = name
        self.msv = msv
        self.lop = lop
        #self.cc = cc

def calc(s):
    res = 10
    for ch in s:
        if ch == 'v':
            res -= 2
        elif ch == 'm':
            res -= 1
        else:
            continue
    if res > 0:
        return res
    else:
        return 0



def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    ma = dict()
    ord = []
    for _ in range(n):
        a = data.readline().decode().strip()
        b = data.readline().decode().strip()
        c = data.readline().decode().strip()
        ma[a] = ma.get(a,0)
        tmp = HS(a,b,c)
        ord.append(tmp)
    for _ in range(n):
        a = data.readline().decode().split()
        ma[a[0]] = ma.get(a[1], calc(a[1]))
        
    for x in ord:
        print(f"{x.msv} {x.name} {x.lop} {ma[x.msv]}" , end=' ')
        if ma[x.msv] <= 0:
            print("KDDK", end='')
        print()
    
        
    

main()
    
        
