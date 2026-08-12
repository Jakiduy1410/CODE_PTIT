import sys

def check(a):
    return (a // 11) * 11 == a

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    while True:
        a = int(next(it))
        if a == -1:
            break
        print("YES" if check(a) else "NO")

main()