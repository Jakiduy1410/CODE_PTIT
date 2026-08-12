import sys
from collections import Counter

def random(s):
    if len(s) == 1:
        if s == '?':
            return ['+', '-', '*', '/']
        else:
            return [s]
    elif len(s) == 2:
        if s == '??':
            return list(range(10,100))
        elif s[0] == '?' and s[1] != '?':
            arr = []
            for i in range(1,10):
                tmp = str(i) + s[1]
                arr.append(int(tmp))
            return arr
        elif s[0] != '?' and s[1] == '?':
            arr = []
            for i in range(0,10):
                tmp = s[0] + str(i)
                arr.append(int(tmp))
            return arr
        else:
            return [int(s)]

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a = next(it).decode().strip()
        b = next(it).decode().strip()
        c = next(it).decode().strip()
        d = next(it).decode().strip()
        e = next(it).decode().strip()

        arr_1 = random(a)
        arr_2 = random(b)
        arr_3 = random(c)
        arr_4 = random(e)

        ok = False
        for x in arr_1:
            for toan in arr_2:
                for y in arr_3:
                    for ans in arr_4:

                        if toan == '+':
                            if x + y == ans:
                                print(f"{x} + {y} = {ans}")
                                ok = True
                                break
                        elif toan == '-':
                            if x - y == ans:
                                print(f"{x} - {y} = {ans}")
                                ok = True
                                break
                        elif toan == '*':
                            if x + y == ans:
                                print(f"{x} * {y} = {ans}")
                                ok = True
                                break
                        elif toan == '/':
                            if x % y == 0 and x // y == ans:
                                print(f"{x} * {y} = {ans}")
                                ok = True
                                break
                            
        if not ok:
            print('WRONG PROBLEM!')




main()
