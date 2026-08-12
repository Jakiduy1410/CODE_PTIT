
import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode().strip()
        res = 0
        b = []
        for ch in s:
            if ch.isdigit():
                res += int(ch)
            else:
                b.append(ch)
        b.sort()
        print(f"{''.join(b)}{res}")



main()