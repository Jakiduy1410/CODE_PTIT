import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    s = (next(it)).decode()
    while len(s) != 1:
        mid = len(s) // 2
        fi = s[0:mid]
        la = s[mid::]
        sum = int(fi) + int(la)
        s = str(sum)
        print(sum)


main()
