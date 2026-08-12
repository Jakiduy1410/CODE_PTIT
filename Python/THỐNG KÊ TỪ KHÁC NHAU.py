import sys

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    mp = dict()
    for _ in range(n):
        line = data.readline().decode().lower().split()
        
        if line and (line[-1][-1] == '!' or line[-1][-1] == '.' or line[-1][-1] == '?'):
            line[-1] = line[-1][:-1]
            
        for s in line:
            if len(s) > 0 and s[-1] in [',', ';', ':']:
                s = s[:-1]

            if s.find('/') > 0:
                part = s.split('/')
                for x in part:
                    if x:
                        mp[x] = mp.get(x,0) + 1
            elif s.find('-') != -1:
                part = s.split('-')
                for x in part:
                    if x:
                        mp[x] = mp.get(x,0) + 1
            else:
                if s:
                    mp[s] = mp.get(s,0) + 1
            
    mp = sorted(mp.items(), key= lambda x: (-x[1] , x[0]))
    for x in mp:
        print(f"{x[0]} {x[1]}")
        
main()