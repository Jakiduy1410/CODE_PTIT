import sys

def rotate(a):
    sum = 0
    for ch in a:
        sum += ord(ch) - ord('A')
    res = ''
    for ch in a:
        ch = chr((ord(ch) + sum - ord('A')) % 26 + ord('A'))
        res += ch
            
    return res

def merge(a,b):
    res = ''
    for i in range(0,len(a)):
        step = ord(b[i]) - ord('A')
        start = ord(a[i])
        new = chr((start + step - ord('A')) % 26 + ord('A'))
        res += new
    return res


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode()
        size = len(s)
        mid = size // 2
        a = s[0:mid]
        b = s[mid::]
        a = rotate(a)
        b = rotate(b)
        c = merge(a,b)
        print(c)
        

main()