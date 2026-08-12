
import sys  

class MH:
    def __init__(self,ma,mon,ht):
        self.ma = ma
        self.mon = mon
        self.ht = ht

def main():
    lines = sys.stdin.read().splitlines()
    if not lines:
        return
    n = int(lines[0])
    ds = []
    idx = 1
    for _ in range(n):
        ma = lines[idx]
        mon = lines[idx+1]
        ht = lines[idx+2]
        ds.append(MH(ma, mon, ht))
        idx += 3
        
    ds.sort(key=lambda x: x.ma)
    for x in ds:
        print(f"{x.ma} {x.mon} {x.ht}")

if __name__ == "__main__":
    main()