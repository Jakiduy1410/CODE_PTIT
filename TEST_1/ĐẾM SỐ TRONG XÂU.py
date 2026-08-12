import sys

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        s = data.readline().decode().strip()
        target = data.readline().decode().strip()
        cnt = 0
        while s.find(target,0) != -1:
            cnt += 1
            pos = s.index(target)
            s = s[pos+len(target)::]
        print(cnt)

main()