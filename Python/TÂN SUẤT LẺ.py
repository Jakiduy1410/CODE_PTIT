import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        a = [int(next(it)) for _ in range(n)]
        mp = {}
        for i in a:
            mp[i] = mp.get(i,0) + 1
        for val,freq in mp.items():
            if freq % 2 != 0:
                print(val)

main()