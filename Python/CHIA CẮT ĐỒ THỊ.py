import sys
from queue import Queue
def bfs(u, visited , adj):
    q = Queue()
    q.put(u)
    visited[u] = True
    while not q.empty():
        top = q.get()
        for x in adj[top]:
            if not visited[x]:
                visited[x] = True
                q.put(x)
    return True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n,m = int(next(it)), int(next(it))
        adj = [[] for _ in range(n+1)]
        for _ in range(m):
            x,y = int(next(it)), int(next(it))
            adj[x].append(y)
            adj[y].append(x)
        mx = 1
        res = 0
        for i in range(1,n+1):
            visited = [False] * (n+1)
            visited[i] = True
            cnt = 0
            for j in range(1,n+1):
                if not visited[j]:
                    cnt += 1
                    bfs(j,visited,adj)
            if cnt > mx:
                mx = cnt
                res = i
                cnt = 1
        print(res if mx != 1 else 0)
            

main()
