def cv(n, m, a):

    res = [list(row) for row in zip(*a)]
    rem = m - n  
    ans = []     
    for i in range(m):
        if i % 2 == 1 and rem > 0:   
            rem -= 1
            continue
        ans.append(res[i])          
    back = [list(row) for row in zip(*ans)]
    return back

def xuat(n, m, a):
    rem = n - m
    for i in range(n):
        if i % 2 == 0 and rem > 0:
            rem -= 1
            continue
        print(*a[i])

def main():
    n, m = map(int, input().split())
    a = [list(map(int, input().split())) for _ in range(n)]

    if n > m:
        xuat(n, m, a)          
    elif n < m:
        ans = cv(n, m, a)   
        for row in ans:
            print(*row)
    else:
        for row in a:
            print(*row)

main()
