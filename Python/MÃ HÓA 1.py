
t = int(input())
for _ in range(t):
    s = input()
    tmp = s[0] 
    cnt = 0
    res = ""
    for ch in s:
        if ch == tmp:
            cnt += 1
        else:
            res += (str(cnt)) + tmp
            tmp = ch
            cnt = 1
    if cnt:
        res += (str(cnt)) + tmp
    print(res)