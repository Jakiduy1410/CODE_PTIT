import math
def solve(n, a, b):
    dp = {0:0}
    for step,cost in zip(a,b):
        mp = dict(dp)
        for a,c in dp.items():
            tmp = math.gcd(a,step)
            total_cost = cost + c
            if tmp not in mp or total_cost < mp[tmp]:
                mp[tmp] = total_cost
        dp = mp
    return dp.get(1,-1)

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int,input().split()))
        b = list(map(int,input().split()))
        print(solve(n,a,b))

main()