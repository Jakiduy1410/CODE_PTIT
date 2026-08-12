import sys
from datetime import datetime

class HD:
    def __init__(self,name,room,date,price,stt):
        self.name = name
        self.room = room
        self.date = date
        self.price = price
        self.stt = stt
        

def calc(room, stay, bonus):
    mul = 1
    if room[0] == '1':
        mul = 25
    elif room[0] == '2':
        mul = 34
    elif room[0] == '3':
        mul = 50
    else:
        mul = 80
    res = (mul * stay) + int(bonus)
    return res

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    ord = []
    cnt = 1
    for _ in range(n):
        a = data.readline().decode().strip()
        b = data.readline().decode().strip()
        c = data.readline().decode().strip()
        d = data.readline().decode().strip()
        e = data.readline().decode().strip()
        d1 = datetime.strptime(c, "%d/%m/%Y")
        d2 = datetime.strptime(d, "%d/%m/%Y")
        total = (d2-d1).days + 1
        res = calc(b,total,e)
        tmp = HD(a,b,total,res,cnt)
        ord.append(tmp)
        cnt += 1
    ord = sorted(ord , key = lambda x: -x.price)
    for pos,x in enumerate(ord):
        print(f"KH{str(x.stt).zfill(2)} {x.name} {x.room} {x.date} {x.price}")

main()