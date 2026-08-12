import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        a = []
        for _ in range(n):
            x,y = int(next(it)), int(next(it))
            a.append((x,y))
        a = sorted(a, key=lambda x: x[1])
        mx = a[-1][1]
        cnt = 0
        # visited = [False] * (mx+1)
        
        next_end = -1
        for x in a:
            start = x[0]
            end = x[1]
            
            if next_end < start:
                cnt += 1
                next_end = end

        print(cnt)
main()