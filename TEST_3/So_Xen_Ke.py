import sys

def check(s):
    if s[0] == s[3] or len(s) % 2 != 0:
        return False
    sim = s[1]
    for pos,val in enumerate(s,1):
        if pos % 2 == 0:
            if val != sim:
                return False
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)

    t = int(next(it))
    for _ in range(t):
        s = next(it).decode().strip()
        s = list(s)
        print('YES' if check(s) else 'NO')

main()
