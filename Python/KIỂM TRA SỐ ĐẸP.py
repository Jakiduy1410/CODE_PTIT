
t = int(input())
for _ in range(t):
    s = input()
    cnt_num = 0
    check = True
    for i in range(0,len(s)-2,2):
        if(s[i] != s[i+2]):
            check = False
    for i in range(1,len(s)-2,2):
        if(s[i] != s[i+2]):
            check = False

    print("YES" if check else "NO")