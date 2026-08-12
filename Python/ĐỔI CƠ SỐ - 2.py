t = int(input())
for _ in range(t):
    b = int(input().strip())
    s = input().strip()

    if b == 2: k = 1
    elif b == 4: k = 2
    elif b == 8: k = 3
    else: k = 4  

    rem = len(s) % k
    if rem:
        s = ('0' * (k - rem)) + s

    pos = 0
    res = []
    digits = "0123456789ABCDEF"

    while pos < len(s):
        tmp = s[pos:pos+k]
        num = int(tmp, 2)
        if b == 16:
            res.append(digits[num])
        else:
            res.append(str(num))
        pos += k

    ans = ''.join(res).lstrip('0')
    print(ans if ans else '0')
