import sys

class PV:
    def __init__(self,stt,name,lt,th):
        self.stt = stt
        self.name = name
        self.lt = lt
        self.th = th
        self.kq = self.calc()
        self.ploai = self.rank()
    
    def calc(self):
        res = (self.lt + self.th) / 2 
        return res

    def rank(self):
        if self.kq < 5.0:
            return 'TRUOT'
        elif self.kq < 8.0:
            return 'CAN NHAC'
        elif self.kq < 9.5:
            return 'DAT'
        else:
            return 'XUAT SAC'

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    cnt = 1
    arr = []
    for _ in range(n):
        a = data.readline().decode().strip()
        b = float(data.readline())
        c = float(data.readline())
        if b > 10: b /= 10
        if c > 10: c /= 10
        tmp = PV(cnt,a,b,c)
        arr.append(tmp)
        cnt += 1
    arr = sorted(arr, key=lambda x: -x.kq)
    for x in arr:
        print(f"TS{str(x.stt).zfill(2)} {x.name} {format(x.kq, '.2f')} {x.ploai}")

main()