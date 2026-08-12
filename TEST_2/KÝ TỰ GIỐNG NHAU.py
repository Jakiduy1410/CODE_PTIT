import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        x,z,y = int(next(it)),int(next(it)),int(next(it))
        dp = [1e9] * (n+1)
        dp[1] = x
        for i in range(2,n+1):
            if i % 2 == 0:
                dp[i] = min(dp[i-1] + x, dp[i // 2] + y)
            else:
                dp[i] = min(dp[i-1] + x, dp[(i+1) // 2] + y + z)
        
        print(dp[n])

main()