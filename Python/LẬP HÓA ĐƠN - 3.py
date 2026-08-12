import sys


class HD:
    def __init__(self, ma, ten, sl, gia, ck):
        self.ma = ma
        self.ten = ten
        self.sl = sl
        self.gia = gia
        self.ck = ck
        self.total = self.calc()

    def calc(self):
        res = (self.gia * self.sl) - self.ck
        return res


def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    arr = []
    for _ in range(n):
        a = data.readline().decode().strip()
        b = data.readline().decode().strip()
        c = int(data.readline())
        d = int(data.readline())
        e = int(data.readline())
        tmp = HD(a,b,c,d,e)
        arr.append(tmp)
    arr = sorted(arr, key=lambda x: -x.total)
    for x in arr:
        print(f"{x.ma} {x.ten} {x.sl} {x.gia} {x.ck} {x.total}")

main()