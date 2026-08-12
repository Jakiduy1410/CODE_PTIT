import sys
from collections import deque

def main():
    data = sys.stdin.buffer.read().split()
    if not data:
        return
    it = iter(data)
    n = int(next(it))
    m = int(next(it))
    g = [set() for _ in range(n)]
    for _ in range(m):
        u = int(next(it)) - 1
        v = int(next(it)) - 1
        g[u].add(v)
        g[v].add(u)

    if m == n * (n - 1) // 2:
        print("YES")
        return

    seen = [False] * n
    comps = []
    for i in range(n):
        if not seen[i]:
            q = deque([i])
            seen[i] = True
            comp = [i]
            while q:
                u = q.popleft()
                for v in g[u]:
                    if not seen[v]:
                        seen[v] = True
                        q.append(v)
                        comp.append(v)
            comps.append(comp)
            if len(comps) > 2:
                print("NO")
                return

    for comp in comps:
        k = len(comp)
        if k <= 1:
            continue
        total_deg = sum(len(g[u]) for u in comp)
        if total_deg != k * (k - 1):
            print("NO")
            return
    print("YES")

if __name__ == '__main__':
    main()
