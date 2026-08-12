import sys

def check(a):
    l = 0
    r = l + 1
    cnt = 0
    res = []
    while l < len(a):
        if a[l] == 6:
            want = 6
            while l < len(a) and a[l] == want:
                want = 8 if want == 6 else 6
                l += 1
            cnt += 1
            res.append(1)
        elif a[l] == 7:  
            cnt += 1
            res.append(2)
            l += 4
        else:
            l += 1
            
    print(cnt)
    for i in res:
        print(i)
    

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    a = []
    for _ in range(n):
        line = data.readline().split()
        len_n = len(line)
        a.append(len_n)
    check(a)
    

main()