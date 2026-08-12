import sys
import math


def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        n,m,v = map(int , data.readline().split())
        size = v*v
        pre = [[0] * m for _ in range(n)]

        pre[0] = list(map(int,data.readline().split()))

        for i in range(1,n):
            row = list(map(int, data.readline().split()))
            for j in range(len(row)):
                pre[i][j] = pre[i-1][j] + row[j]

        for i in range(0, n-v+1):
            arr = []
            sum_num = 0
            for j in range(0,v):
                if i == 0:
                    sum_num += (pre[i+v-1][j])
                else:
                    sum_num += (pre[i+v-1][j] - pre[i-1][j])
            arr.append(sum_num)
            for j in range(1,m-v+1):
                if i == 0:
                   sum_num = sum_num + (pre[i+v-1][j+v-1] - pre[i+v-1][j-1])
                else:
                    sum_num = sum_num + (pre[i+v-1][j+v-1] - pre[i+v-1][j-1] - pre[i-1][j+v-1] + pre[i-1][j-1])
                arr.append(sum_num)
            for x in arr:
                print(x // size, end=" ")
            print()

        
main()
