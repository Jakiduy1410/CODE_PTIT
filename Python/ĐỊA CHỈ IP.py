import sys

def check(parts):
    if len(parts) != 4:
        return False
    for p in parts:
        if not p.isdigit():
            return False
        if len(p) > 1 and p[0] == '0': 
            return False
        num = int(p)
        if num < 0 or num > 255:
            return False
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode()      
        parts = s.split('.')
        print("YES" if check(parts) else "NO")

main()
