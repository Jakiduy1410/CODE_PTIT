import sys

def main():
    data = sys.stdin.buffer

    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode().strip()
        ok = True
        for ch in s:
            if ch not in ['0', '1', '2', '3', '4']:
                ok = False
                break
        print('YES' if ok else 'NO')

main()