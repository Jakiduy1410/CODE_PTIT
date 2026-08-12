import sys
from queue import PriorityQueue as pq

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        cnt = 0
        dm = pq(type=int,reversed = True)
        dm.put([1,2,5,6,7,88])

        for i in range(2,(n // 2) + 1):
            tmp = n - ((i*(i-1)) / 2) 
            if tmp % i == 0 and tmp > 0:
                cnt += 1
        print(cnt)

main()