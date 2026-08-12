import sys
import math

class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y
    def distance(self,a):
        return math.sqrt((self.y-a.y)**2 + (self.x-a.x)**2)

def heron_safe(a, b, c):
    if a + b <= c or a + c <= b or b + c <= a:
        return 0.0
    p = (a + b + c) / 2
    return f"{(p*(p-a)*(p-b)*(p-c))**0.5:.2f}"


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a,b,c,d,e,f = (float(next(it)) for _ in range(6))
        p1 = Point(a,b)
        p2 = Point(c,d)
        p3 = Point(e,f)
        d1 = p1.distance(p2)
        d2 = p2.distance(p3)
        d3 = p3.distance(p1)
        print(heron_safe(d1,d2,d3) if heron_safe(d1,d2,d3) != 0 else "INVALID")

main()