import sys

class BD:
    def __init__(self,stt,ten,ma,tin,cm):
        self.stt = stt
        self.ten = ten
        self.ma = ma
        self.tin = tin
        self.cm = cm
        self.point = self.calc()
        self.mon = self.ploai()
        self.status = self.ok()
    
    def ok(self):
        if self.point >= 18:
            return "TRUNG TUYEN"
        else:
            return "LOAI"
    
    def ploai(self):
        if self.ma[0] == 'A':
            return "TOAN"
        elif self.ma[0] == 'B':
            return "LY"
        else:
            return "HOA"
        
    def calc(self):
        bonus = 0
        if self.ma[1] == '1': bonus = 2.0
        elif self.ma[1] == '2': bonus = 1.5
        elif self.ma[1] == '3': bonus = 1.0
        else: bonus = 0.0
        res = float(self.tin * 2) + float(self.cm) + bonus
        return res
        

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    arr = []
    cnt = 1
    for _ in range(n):
        a = data.readline().decode().strip()
        b = data.readline().decode().strip()
        c = float(data.readline())
        d = float(data.readline())
        tmp = BD(cnt,a,b,c,d)
        arr.append(tmp)
        cnt += 1
    arr = sorted(arr , key= lambda x: -x.point)
    for x in arr:
        print(f"GV{str(x.stt).zfill(2)} {x.ten} {x.mon} {x.point} {x.status}")
    
main()
        