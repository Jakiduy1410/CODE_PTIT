from curses.ascii import isdigit


t = int(input())
while t > 0:
    s = input()
    len_s = len(s)
    tmp = ""
    min_num = 1e9
    for i in range(len_s):
        if isdigit(s[i]):
            tmp += s[i]
        else:
            if tmp != "":
                min_num = min(min_num, int(tmp))
                tmp = ""
    if tmp != "":
        min_num = min(min_num, int(tmp))
    print(min_num, end="\n")
    t -= 1
