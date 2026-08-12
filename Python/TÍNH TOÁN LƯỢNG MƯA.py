
import sys

class Data:
    __slots__ = ("idx", "name", "time", "rain","tb")
    def __init__(self,idx,name):
        self.name = name
        self.rain = 0
        self.time = 0
        self.tb = 0
        self.idx = idx

def convert(s):
    h = float(s[:2]) *3600
    min = float(s[3:]) * 60
    ans = h + min
    return int(ans)

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    mp = {}
    order = []
    for _ in range(n):
        name = data.readline().decode().strip()
        start = data.readline()
        end = data.readline()
        mua = int(data.readline())
        a = convert(start)
        b = convert(end)
        t = b - a

        if name not in mp:
            tmp = Data(len(order) + 1, name)
            mp[name] = tmp
            order.append(tmp)
        else:
            tmp = mp[name]
        
        tmp.rain += mua
        tmp.time += t
    
    for obj in order:
        total_minutes = obj.time / 3600
        obj.tb = obj.rain / total_minutes
        print(f"T{obj.idx:02d} {obj.name} {obj.tb:.2f}")
             
        

main()

