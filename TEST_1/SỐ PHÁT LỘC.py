import sys

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        s = data.readline().decode().strip()
        if s[-2::] == '86':
            print('YES')
        else:
            print('NO')
main()