import sys
import re




def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))

    a = [int(next(it)) for _ in range(n)]

    chan = [x for x in a if x % 2 == 0]
    le = [x for x in a if x % 2 != 0]

    chan.sort()
    le.sort(reverse=True)
    
    pos_c = 0
    pos_l = 0
    for x in a:
        if x % 2 == 0:
            print(chan[pos_c], end=" ")
            pos_c += 1
        else:
            print(le[pos_l], end=" ")
            pos_l += 1


   

main()