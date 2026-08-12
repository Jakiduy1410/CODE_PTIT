import sys


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = next(it).decode()
    if len(n) == 1:
        print(1)
    else:
        cnt = 0
        sum_num = 0
        while len(n) != 1:
            sum_num =  sum(int(ch) for ch in n if ch.isdigit())
            n = str(sum_num)
            sum_num = 0
            cnt += 1
        print(cnt)

main()