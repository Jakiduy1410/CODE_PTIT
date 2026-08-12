import sys
from queue import Queue

def bfs(u,adj,visited):
    q = Queue()

    q.put(u)
    visited[u] = True

    while not q.empty():
        tmp = q.get()
        for x in adj[tmp]:
            if not visited[x]:
                q.put(x)
                visited[x] = True

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); m = int(next(it)); u = int(next(it))
    adj = [[] for _ in range(n+1)]
    for _ in range(m):
        x = int(next(it)); y = int(next(it))
        adj[x].append(y)
        adj[y].append(x)
    visited = [False] * (n+1)
    bfs(u,adj,visited)
    for i in range(1,n+1):
        if not visited[i]:
            print(i)

main()