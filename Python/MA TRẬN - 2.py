from math import fabs
def main():
    n = int(input())
    a = [[0] * n for i in range(n)]
    a = [list(map(int ,input().split())) for i in range(n)]
    k = int(input())
    sum_up,sum_down = 0,0
    for i in range(n):
        for j in range(n):
            if j <= n - i - 2:
                sum_up += a[i][j]
            if j >= n - i:
                sum_down += a[i][j]
    res = int(fabs(sum_up - sum_down))
    if res <= k:
        print("YES")
        print(res)
    else:
        print("NO")
        print(res)

main()