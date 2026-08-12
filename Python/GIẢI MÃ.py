

t = int(input())
for _ in range(t):
    s = input() + '.'
    pos = 0
    res = ""
    ch = ""
    num = ""
    for i in range(len(s)):
        if s[i].isdigit():
            num += s[i]
        else:
            if num:
                res += int(num) * ch
                num = ""
                ch = ""
            ch += s[i]
   
    print(res)