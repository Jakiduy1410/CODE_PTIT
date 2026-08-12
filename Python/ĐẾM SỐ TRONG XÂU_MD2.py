import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode()
        target = next(it).decode()
        cnt = 0
        while True:
            pos = s.find(target)
            if pos < 0:
                break
            else:
                cnt += 1
                s = s[pos+len(target)::]
        print(cnt)

main()