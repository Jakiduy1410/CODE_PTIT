import sys
from datetime import datetime

class VT:
    def __init__(self, ten, vung, vantoc, time):
        self.ten = ten
        self.vung = vung
        self.vantoc = vantoc
        self.time = time
        self.ma = self.gen()
    
    def gen(self):
        tach_ten = self.ten.split()
        tach_vung = self.vung.split()
        res = ''
        for x in tach_vung:
            res += x[0]
        for x in tach_ten:
            res += x[0]
        return res


    
        

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    start = datetime.strptime("6 : 00" , "%H : %M")
    s = 120
    ord = []
    for _ in range(n):
        a = data.readline().decode().strip()
        b = data.readline().decode().strip()
        c = data.readline().decode().strip()
        end = datetime.strptime(c , "%H:%M")
        lap = (end - start).total_seconds() / 3600
        vt = round(s / lap)
        tmp = VT(ten= a, vung= b, vantoc=vt, time=lap)
        ord.append(tmp)
    ord = sorted(ord, key = lambda x: x.time)
    for x in ord:
        print(f"{x.ma} {x.ten} {x.vung} {x.vantoc} Km/h")
    

main()