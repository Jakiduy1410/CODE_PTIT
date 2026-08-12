from math import gcd

class Ps:
    def __init__(self,x,y):
        self.x = x
        self.y = y

def rut_gon(a):
    ucln = gcd(a.x,a.y)
    a.x //= ucln
    a.y //= ucln
    print(str(a.x)+"/"+str(a.y))
    return 
def main():
    a,b = map(int, input().split())
    rut_gon(Ps(a,b))

if __name__ == "__main__":
    main()