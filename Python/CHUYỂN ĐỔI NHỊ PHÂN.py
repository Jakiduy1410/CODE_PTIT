import sys

def calc(k, a):
    if k == 2:
        rem = 1
    elif k == 4:
        rem = 2
    elif k == 8:
        rem = 3
    else:
        rem = 4

    ln = len(a)
    du = ln % rem
    if du != 0:
        a = ("0" * (rem - du)) + a

    res = ""
    for i in range(0, len(a), rem):
        tmp = a[i:i+rem]
        num = int(tmp, 2)
        if k == 16 and num >= 10:
            res += chr(ord('A') + (num - 10))
        else:
            res += str(num)
    return res

def main():
    with open("DATA.in", "rb") as f:
        data = f.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        k = int(next(it))
        a = next(it).decode().strip()
        print(calc(k, a))

main()
