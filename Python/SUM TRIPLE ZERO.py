import sys

input = sys.stdin.readline

t = int(input())
while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    cnt = 0
    i = 0
    while i < n - 2:
        # tmp = a[i]
        if a[i] + a[i + 1] + a[i + 2] > 0:
            break
        if a[i] + a[n - 1] + a[n - 2] < 0:
            i += 1
            while i < n - 2 and a[i] == a[i - 1]:
                i += 1
            continue
        l, r = i + 1, n - 1
        while l < r:
            s = a[i] + a[l] + a[r]
            if s == 0:
                if a[l] == a[r]:
                    cnt += (r - l) * (r - l + 1) // 2
                    break
                else:
                    cnt_l , cnt_r = 1,1
                    while l + 1 < r and a[l] == a[l+1]:
                        cnt_l += 1
                        l += 1
                    while r - 1 > l and a[r] == a[r-1]:
                        cnt_r += 1
                        r -= 1
                    cnt += (cnt_r * cnt_l)
                    l+=1
                    r-=1
            elif s < 0:
                l += 1
            else:
                r -= 1
        i += 1
        while i < n - 2 and a[i] == a[i - 1]:
            i += 1

    print(cnt)
    t -= 1
