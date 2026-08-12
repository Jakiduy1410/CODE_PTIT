import sys
import re
from collections import Counter

def main():
    data = sys.stdin.buffer
    n,k = map(int,data.readline().split())
    arr = []
    for _ in range(n):
        s = data.readline().lower().decode()
        a = re.split(r'[^A-Za-z]', s)

        for x in a:
            if x:
                arr.append(x)

    b = Counter(arr)
    b = sorted(b.items(), key=lambda x: (-x[1], x[0]))
    for x in b:
        if x[1]:
            print(f"{x[0]} {x[1]}")

    

main()
