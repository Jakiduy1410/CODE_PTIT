import sys

def convert(a,k):
    res = ""
    if a == 0:
        return "0"
    while a > 0:
        tmp = a % k
        if tmp < 10:
            res += str(tmp)
        else:
            res += chr(ord('A') + (tmp - 10))
        a //= k
    return res[::-1]

def check(s):
    return s == s[::-1]

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    while True:
        try:
            a = int(next(it)); b = int(next(it)); c = int(next(it))
        except StopIteration:
            break

        if a == -1:
            break
        s1 = convert(a,b)
        s2 = convert(a,c)
        print("YES" if check(s1) and check(s2) else "NO") 

main()