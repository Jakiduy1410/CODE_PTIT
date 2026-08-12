import sys
from collections import deque

def gen():
    res = []
    dq = deque()
    dq.append(("1",1,0))
    dq.append(("2",1,1))
    while dq:
        s,ln,cnt = dq.popleft()

        if cnt * 2 > ln:
            res.append(int(s))
            if len(res) >= 1000:
                break
        
        dq.append((s+"0",ln+1,cnt))
        dq.append((s+"1",ln+1,cnt))
        dq.append((s+"2",ln+1,cnt + 1))
    return res

def main():
    data = sys.stdin.read().split()
    it = iter(data)
    t = int(next(it))
    ans = gen()
    ans.sort()
    for _ in range(t):
        n = int(next(it))
        for i in range(n):
            print(ans[i],end=" ")
        print()
        
main()