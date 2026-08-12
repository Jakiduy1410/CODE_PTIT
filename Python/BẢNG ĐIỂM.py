import sys

class HS:
    #__slots__ = ("stt" , "name", "dtb" , "xl")
    def __init__(self,stt,name,dtb,xl):
        self.name = name
        self.dtb = dtb
        self.stt = stt
        self.xl = xl

def phan_loai(n):
    if n >= 9:
        return "XUAT SAC"
    elif n >= 8:
        return "GIOI"
    elif n >= 7:
        return "KHA"
    elif n >= 5:
        return "TB"
    else:
        return "YEU"

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    ord = []
    cnt = 1
    for _ in range(n):
        name = data.readline().decode().strip()
        a,b,c,d,e,f,g,h,i,j = map(float,data.readline().split())
        dtb = (2*a + 2*b + c + d + e + f + g + h + i + j) / 12 +0.0000000001
        x = phan_loai(dtb)
        tmp = HS(cnt, name,dtb,x)
        ord.append(tmp)
        cnt += 1

    ord.sort(key= lambda x:(-x.dtb,x.stt))
    for i in ord:
        print(f"HS{str(i.stt).zfill(2)} {i.name} {i.dtb:.1f} {i.xl}")

main()