import sys
from collections import defaultdict,deque


def check(mp, adj):
    q = deque([key for key, val in mp.items() if val == 0])
    if len(q) == 0:
        return False
    cnt = 0
    while q:
        top = q.pop()
        cnt += 1
        for neigbour in adj[top]:
            mp[neigbour] -= 1
            if mp[neigbour] == 0:
                q.append(neigbour)
    return cnt == len(mp)
        

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    mp = defaultdict(list)
    adj = defaultdict(list)
    for _ in range(t):
        line = data.readline().decode().split()
        mp[line[0]] = mp.get(line[0],0)
        mp[line[2]] = mp.get(line[2],0)
        if line[1] == '>':
            mp[line[2]] += 1
            adj[line[0]].append(line[2])
        elif line[1] == '<':
            mp[line[0]] += 1
            adj[line[2]].append(line[0])
    
    print('possible' if check(mp,adj) else 'impossible')
    

main()
