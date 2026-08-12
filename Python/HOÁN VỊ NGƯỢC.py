from itertools import permutations
import sys
def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        arr = []
        num = []
        for i in range(n,0,-1):
            num.append(i)
        for x in permutations(num):
            s = ''.join(map(str,x))
            arr.append(s)
        print(len(arr))
        print(*arr)
            

main()
