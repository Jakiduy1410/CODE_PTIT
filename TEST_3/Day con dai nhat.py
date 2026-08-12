import sys

def main():
    data = sys.stdin.buffer.read().split()

    it = iter(data)

    t = int(next(it))
    for _ in range(t):
        mx = 0
        len = 0
        s = next(it).decode().strip()
        for ch in s:
            if ch == '0':
                len += 1
            else:
                mx = max(mx,len)
                len = 0
        if len:
            mx = max(mx, len)
        print(mx)

main()