
class Matrix:
    def __init__(self,n,m,a):
        self.n = n
        self.m = m
        self.a = a
    def chuyen_vi(self):
        res = [[0]* self.n for _ in range(self.m)]
        for i in range(self.n):
            for j in range(self.m):
                res[j][i] = self.a[i][j]
        return Matrix(self.m,self.n,res)
    
    def tich(self,a):
        res = [[0] * a.m for _ in range(self.n)]
        for i in range(self.n):
            for j in range(a.m):
                for k in range(self.m):
                    res[i][j] += self.a[i][k] * a.a[k][j]
        return Matrix(self.n,a.m,res)
    
    def out(self):
        for i in range(self.n):
            for j in range(self.m):
                print(self.a[i][j], end=" ")
            print()



def main():
    t = int(input())
    for _ in range(t):
        n,m = map(int,input().split())
        a = [list(map(int,input().split())) for _ in range(n)]
        mx = Matrix(n,m,a)
        cv = mx.chuyen_vi()
        res = mx.tich(cv)
        res.out()

if __name__ == "__main__":
    main()