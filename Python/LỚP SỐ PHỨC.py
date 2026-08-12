import sys

class Comp:
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def trans(self):
        return complex(self.a,self.b)


def fmt(z: complex):
    a = int(z.real)
    b = int(z.imag)
    res = str(a)
    if b < 0:
        res += " -"
    else:
        res += " +"
    res += " " + str(abs(b)) + "i"
    return res

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a,b = (int(next(it)) for _ in range(2))
        c,d = (int(next(it)) for _ in range(2))
        s1 = Comp(a,b)
        s2 = Comp(c,d)
        x = s1.trans()
        y = s2.trans()
        cong = (x + y)*x
        nhan = (x+y)**2
        print(fmt(cong)+",",fmt(nhan))

main()
        