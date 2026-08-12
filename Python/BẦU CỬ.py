import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); m = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    mp = {}
    for x in a:
        mp[x] = mp.get(x,0) + 1
    
    items = sorted(mp.items() , key= lambda x: (x[1]))
    mx = items[-1][1]
    found = False
    for val,freq in reversed(items):
        if freq < mx:
            print(val)
            found = True
            break
    if not found:
        print("NONE")

main()