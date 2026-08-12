t = int(input())
while t > 0:
    a = int(input())
    check = 10
    while a > check:
        tmp = a % check
        if tmp * 2 >= check:
            a += (check - tmp)
        else:
            a -= tmp
        check *= 10
    print(a)
    t -= 1


