import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        s = []
        for _ in range(n):
            x,y = float(next(it)), float(next(it))
            s.append((x,y))
        dp = [1] * (n+1)
        for i in range(1,n):
            a = s[i][0]
            b = s[i][1]
            for j in range(0,i):
                if a > s[j][0] and b < s[j][1]:
                    dp[i] = max(dp[i] , dp[j] + 1)
        print(max(dp))

main()