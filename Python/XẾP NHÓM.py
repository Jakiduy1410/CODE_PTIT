import sys
from bisect import bisect_left

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        n,k = map(int,data.readline().split())
        line = data.readline().decode().strip()
        a = []
        while len(a) < n:
            a.extend(map(int, line.split()))
        a.sort()
        prefix = [0] * (n+1)

        for i in range(1,n+1):
            prefix[i] = prefix[i-1] + a[i-1]
        
        
        mx = prefix[-1] // k
        mn = 0

        ans = 0
        
        while mn <= mx:
            mid = (mx+mn) // 2
            idx = bisect_left(a,mid)

            total_people = (prefix[idx]) + ((n-idx) * mid)

            if total_people >= mid * k:
                ans = mid
                mn = mid+1
            else:
                mx = mid-1
        print(ans)


main()