import sys
import re
from collections import Counter

def main():
    data = sys.stdin.buffer
    n, k = map(int, data.readline().split())
    mp = {}
    for _ in range(n):
        line = data.readline().decode().strip().lower()
        words = re.split(r'[^a-z0-9]+', line)
        for word in words:
            if word:
                mp[word] = mp.get(word,0) + 1
    mp = sorted(mp.items(), key=lambda x: (-x[1], x[0]))
    for key in mp:
        if key[1] >= k:
            print(key[0],key[1])

main()
