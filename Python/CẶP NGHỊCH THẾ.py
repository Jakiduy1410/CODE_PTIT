
def main():
    n = int(input())
    a = list(map(int,input().split()))
    cnt = 0
    for i in range(1,n):
        for j in range(0,i):
            if a[j] > a[i]:
                cnt += 1
    print(cnt)

main()