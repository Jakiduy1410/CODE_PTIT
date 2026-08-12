import sys

def check(s,tag):
    sum_num = 0
    s = str(s)
    sum_num =  sum(int(ch) for ch in s)
    return sum_num == tag

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    while True:
        a = int(next(it))
        if a == -1:
            break
        b = int(next(it))
        cnt = 0
        for i in range(1,a+1):
            if check(i,b):
                cnt += 1
        print(cnt)
    
main()