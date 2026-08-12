import sys

def dfs(u,v,visited,adj):
    if u == v:
        return True
    visited[u] = True
    for tmp in adj[u]:
        if not visited[tmp]:
            if dfs(tmp,v,visited,adj):
                return True

    return False

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it)); m = int(next(it)); u = int(next(it)); v = int(next(it))
        adj = [[] for _ in range(n+1)]

        for i in range(m):
            x = int(next(it)); y = int(next(it))
            adj[x].append(y)
        
        cnt = 0
        for i in range(1,n+1):
            visited = [False] * (n+1)
            if i != u and i != v:
                visited[i] = True
                reach = dfs(u,v,visited,adj)
                if not reach:
                    cnt += 1
        print(cnt)

if __name__ == "__main__":
    main()
