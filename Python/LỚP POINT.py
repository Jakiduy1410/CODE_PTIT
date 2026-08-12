
from decimal import Decimal

class Point:
    def __init__(self, x, y):
        self.x = Decimal(x)
        self.y = Decimal(y)
    
    def distance(self, other):
        dx = self.x - other.x
        dy = self.y - other.y
        res = (dx**2 + dy**2).sqrt()
        
        return '{:.4f}'.format(res)

if __name__ == '__main__':
    t = int(input())
    while t > 0:
        arr = input().split()
        p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
        p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
        print(p1.distance(p2))
        t -= 1