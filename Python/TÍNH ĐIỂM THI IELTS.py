import sys

def point(n):
    if n >= 39: return 9.0
    elif n >= 37: return 8.5
    elif n >= 35: return 8.0
    elif n >= 33: return 7.5
    elif n >= 30: return 7.0
    elif n >= 27: return 6.5
    elif n >= 23: return 6.0
    elif n >= 20: return 5.5
    elif n >= 16: return 5.0
    elif n >= 13: return 4.5
    elif n >= 10: return 4.0
    elif n >= 7: return 3.5
    elif n >= 5: return 3.0
    else: return 2.5


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a = int(next(it)); b= int(next(it)); c = float(next(it)); d = float(next(it))
        a = point(a)
        b = point(b)
        tb = (a+b+c+d) / 4
        rem = tb - int(tb)
        if rem >= 0.75:
            rem  = 1
        elif rem >= 0.25:
            rem = 0.5
        else:
            rem = 0
        res = int(tb) +rem
        print(f"{res:.1f}")

main()