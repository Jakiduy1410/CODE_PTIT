import sys
import re

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it)); k = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    b = [int(next(it)) for _ in range(n)]

    arr = []
    for i in range(len(a)):
        tmp = a[i] - b[i]
        arr.append((a[i],b[i],tmp))
    arr = sorted(arr, key= lambda x: x[2])
   
    cnt = 0
    res  = 0
    for x in arr:
        if cnt < k:
            res += x[0]
            cnt += 1
        elif cnt == k and x[2] < 0:
            res += x[0]
        elif cnt == k and x[2] >= 0:
            res += x[1]


    print(res)

main()