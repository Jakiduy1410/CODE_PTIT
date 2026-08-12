import sys

def main():
    data = sys.stdin.buffer.read().split()
    if not data:
        return  # hợp lệ vì đang ở trong main()

    n = data[0].decode().strip()

    cnt = 0
    while len(n) > 1:
        s = 0
        for ch in n:
            s += ord(ch) - 48
        n = str(s)
        cnt += 1

    print(cnt)

if __name__ == "__main__":
    main()