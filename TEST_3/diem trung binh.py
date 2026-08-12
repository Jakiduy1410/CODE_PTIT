import sys

class HS:
    def __init__(self,name,date,a,b,c) -> None:
        self.name = name
        self.date = date
        self.a = a
        self.b = b
        self.c = c
        self.total = self.calc()

    def calc(self):
        mn = min(self.a,self.b,self.c)
        if mn == self.a:
            res = (self.a * 2) + self.b + self.c
        elif mn == self.b:
            res = (self.b * 2) + self.a + self.c
        if mn == self.c:
            res = (self.c * 2) + self.b + self.a
        return res / 4


def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    arr = []
    for _ in range(t):
        name = data.readline().decode().strip()
        date = data.readline().decode().strip()
        a = float(data.readline().decode().strip())
        b = float(data.readline().decode().strip())
        c = float(data.readline().decode().strip())

        arr.append(HS(name,date,a,b,c))
    
    arr = sorted(arr, key=lambda x: -x.total)
    for x in arr:
        print(f"{x.name} {x.date} {x.total:.1f}")

main()