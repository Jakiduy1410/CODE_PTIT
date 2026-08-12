

def main():
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    res = 1
    pos = 0
    while pos < len(a):
        if res == a[pos]:
            res += 1
        elif res > a[pos]:
            break
        pos += 1
    print(res)

main()