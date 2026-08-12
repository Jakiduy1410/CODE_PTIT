import sys
from datetime import datetime
class TG:
    def __init__(self,ma,name,start,end):
        self.ma = ma
        self.name = name
        self.start = start
        self.end = end
        self.ss = end - start
        self.time = self.decod()
    
    def decod(self):
        time = self.end - self.start
        gio = int(time.total_seconds() // 3600)
        phut = int(time.total_seconds() % 3600) // 60
        
        return f"{gio} gio {phut} phut"
        
def main():
    data = sys.stdin.buffer
    n = int(data.readline().decode().strip())
    arr = []
    for _ in range(n):
        a = data.readline().decode().strip()
        b = data.readline().decode().strip()
        c = data.readline().decode().strip()
        d = data.readline().decode().strip()
        start = datetime.strptime(c, '%H:%M')
        end = datetime.strptime(d, '%H:%M')
        tmp = TG(a,b,start,end)
        arr.append(tmp)
    arr = sorted(arr, key=lambda x : -x.ss)
    for x in arr:
        print(f"{x.ma} {x.name} {x.time}")

main()