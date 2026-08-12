import sys
import re

def main():
    data = sys.stdin.buffer
    n,k = map(int,data.readline().split())
    mp = dict()
    for _ in range(n):
        line = data.readline().decode().lower()
        line = re.split("[^a-z0-9]", line)
        for x in line:
            if x != '':
                mp[x] = mp.get(x,0) + 1
    mp = sorted(mp.items() , key= lambda x:(-x[1] , x[0]))
    for x in mp:
        if x[1] >= k:
            print(f"{x[0]} {x[1]}")



main()