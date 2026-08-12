from math import fabs

def main():
    while True:
        a = list(map(int,input().split()))
        if a.count(0) == 4:
            break
        cnt = 0
        while len(set(a)) != 1:
            res = [0] * len(a)
            for i in range(0,3):
                res[i] = abs(a[i]-a[i+1])
            res[3] =  abs(a[3]-a[0])
            a = res
            cnt += 1
        print(cnt)


main()