
from math import sqrt

class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y
    def distance(self,p):
        return sqrt((self.x - p.x)**2 + (self.y-p.y)**2)
        
class Triangle:
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    def cv(self):
        a, b, c = self.a, self.b, self.c
        eps = 1e-9
        if a + b <= c + eps or a + c <= b + eps or b + c <= a + eps:
            return "INVALID"
        return f"{a + b + c:.3f}"


def main():
    t = int(input())
    for _ in range(t):
        a,b,c,d,e,f = map(int,input().split())
        p1 = Point(a,b)
        p2 = Point(c,d)
        p3 = Point(e,f)
        d1 = p1.distance(p2)
        d2 = p2.distance(p3)
        d3 = p3.distance(p1)
        tri = Triangle(d1,d2,d3)
        print(tri.cv())

if __name__ == "__main__":
    main()