import sys
from collections import deque

def main():
    data = sys.stdin.buffer.read().split()
    if not data: return
    it = iter(data)
    t_str = next(it, None)
    if t_str is None: return
    t = int(t_str)
    
    for _ in range(t):
        n = int(next(it)); m = int(next(it))
        a = [[int(next(it)) for _ in range(m)] for _ in range(n)]
        q = deque()
        
        visited = [[False] * m for _ in range(n)]
        
        q.append((0, 0, 0))
        visited[0][0] = True
        
        dx = [(1, 0), (0, 1), (1, 1)]
        ans = -1 
        
        while q:
            new_i, new_j, cnt = q.popleft() 
            
            if new_i == n - 1 and new_j == m - 1:
                ans = cnt
                break
            
            for step in dx:
                ni = new_i + step[0]
                nj = new_j + step[1]
                
                if ni < n and nj < m:
                    tmp = abs(a[new_i][new_j] - a[ni][nj])
                    
                    if tmp == 0: continue #
                    

                    nxt_i, nxt_j = new_i, new_j
                    if step == (1, 0): nxt_i += tmp
                    elif step == (0, 1): nxt_j += tmp
                    elif step == (1, 1):
                        nxt_i += tmp
                        nxt_j += tmp
                    

                    if nxt_i < n and nxt_j < m and not visited[nxt_i][nxt_j]:
                        visited[nxt_i][nxt_j] = True
                        q.append((nxt_i, nxt_j, cnt + 1)) 
        print(ans)

if __name__ == "__main__":
    main()