import sys



def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    
    for _ in range(t):
        n = int(next(it)); m = int(next(it))
        a = [int(next(it)) for _ in range(n)]
        b = [int(next(it)) for i in range(m)]

        giao = []
        hop = a + b
        hop = set(hop)
        
        
        for x in set(a):
            if x in set(b):
                giao.append(x)
        print(*giao)
        print(*hop)
        print(f'{len(giao)  / len(hop) :.5f}')
            
main()