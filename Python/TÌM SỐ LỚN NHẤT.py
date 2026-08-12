
from curses.ascii import isdigit

t = int(input())

while t > 0:
    s = input()
    max_digit = -1
    tmp = ""
    for char in s:
        if char.isdigit():
            tmp += char
        else:
            if tmp != "":
                max_digit = max(max_digit, int(tmp))
                tmp = ""
    
    if tmp != "":
        max_digit = max(max_digit, int(tmp))
    print(max_digit, end="\n")
    t -= 1