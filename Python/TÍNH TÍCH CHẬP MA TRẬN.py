
def calc(kernel,a,i,j):
    sum_num = 0
    for u in range(3):
        for v in range(3):
            sum_num += kernel[u][v] * a[i+u][j+v]
    return sum_num


def main():
    t = int(input())
    for _ in range(t):
        n,m = map(int,input().split())
        #a = [[0] * m for i in range(n)]
        a = [list(map(int,input().split())) for i in range(n)]

        #kernel = [[0] * 3 for i in range(3)]
        kernel = [list(map(int,input().split())) for i in range(3)]

        sum_num = 0
        for i in range(0,n - 2):
            for j in range(0,m - 2):
                sum_num += calc(kernel,a,i,j)
        print(sum_num)

main()
