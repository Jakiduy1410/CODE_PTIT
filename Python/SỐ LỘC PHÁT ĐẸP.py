import sys

def check(s):
    if s[0] == '8':
        return False
    pos = 0
    while pos < len(s):
        ch = s[pos]
        if ch != '6':
            return False
        
        if s[pos: pos +3] == "688":
            pos += 3
        elif s[pos: pos + 2] == "68":
            pos += 2
        elif s[pos] == "6":
            pos += 1

    return True

def main():
    data = sys.stdin.buffer.read().split()
    if not data:
        return
    it = iter(data)
    s = next(it).decode()
    print("YES" if check(s) else "NO")

main()