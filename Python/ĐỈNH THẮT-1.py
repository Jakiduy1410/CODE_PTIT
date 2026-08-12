import sys

def dfs(u,v, visited, adj):
    if u == v:
        return True
    
    visited[u] = True
    for x in adj[u]:
        if not visited[x]:
            if dfs(x,v,visited,adj):
                return True
    return False

def solve(adj,n,u,v):
    cnt = 0
    for i in range(1,n+1):
        visited = [False] * (n+1)
        if i != u and i != v:
            visited[i] = True
            if not dfs(u,v,visited,adj):
                cnt += 1
    return cnt


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); m = int(next(it)); u = int(next(it)); v = int(next(it))
        adj = [[] for _ in range(n+1)]
        for _ in range(m):
            x = int(next(it)); y = int(next(it))
            adj[x].append(y)
        print(solve(adj,n,u,v))
        
        
main()
