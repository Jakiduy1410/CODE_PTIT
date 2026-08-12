import sys
import re

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    arr = []
    for _ in range(t):
        s = data.readline().decode().strip()
        line = re.split(r"[^0-9]+" , s)
        for x in line:
            if x:
             arr.append(int(x))
    for x in sorted(arr):
        print(x)

main()