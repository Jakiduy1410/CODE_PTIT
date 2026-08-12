import os
import re
import heapq
from itertools import islice

def solve():
    input_data = os.read(0, 1 << 26)
    iterator = (int(m.group()) for m in re.finditer(rb'-?\d+', input_data))
    
    try:
        t = next(iterator)
        for _ in range(t):
            n = next(iterator)
            chunk = islice(iterator, n)
            min_3 = heapq.nsmallest(3, chunk)
            print(sum(min_3))
            
    except StopIteration:
        pass

if __name__ == '__main__':
    solve()