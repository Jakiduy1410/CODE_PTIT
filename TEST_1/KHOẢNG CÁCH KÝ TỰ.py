import sys

def check(a,b):
    if len(a) != len(b):
        return False
    for i in range(1,len(a)):
        x = abs(ord(a[i]) - ord(a[i-1]))
        y = abs(ord(b[i]) - ord(b[i-1]))
        if x != y:
            return False
    return True

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        a = data.readline().decode().strip()
        b = a[::-1]
        print("YES" if check(a,b) else 'NO')

main()