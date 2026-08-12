import math

t = int(input())
for _ in range(t):
    n = input()
    cnt = 0
    sum_num = int(n)
    found = False
    if sum_num % 7 == 0:
        print(n)
        continue
    while cnt <= 1000:
        dao = n[::-1]
        dao = int(dao)
        sum_num += dao
        n = str(sum_num)
        if sum_num % 7 == 0:
            found = True
            break
        cnt += 1
    print(sum_num if found else -1)


