from math import gcd

class Ps:
    def __init__(self,x,y):
        self.x = x
        self.y = y

def quy_dong(a,b):
    res = Ps(0,0)
    a.x = a.x*b.y
    b.x = b.x*a.y
    res.y = b.y*a.y
    res.x = a.x + b.x
    return res

def rut_gon(a):
    ucln = gcd(a.x,a.y)
    a.x //= ucln
    a.y //= ucln
    print(str(a.x)+"/"+str(a.y))
    return 

def main():
    a,b,c,d = map(int,input().split())
    ps1 = Ps(a,b)
    ps2 = Ps(c,d)
    ps3 = quy_dong(ps1,ps2)
    rut_gon(ps3)

if __name__ == "__main__":
    main()