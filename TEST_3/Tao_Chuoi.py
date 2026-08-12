import sys
from collections import Counter

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode().strip()
        a = Counter(s)
        freq = ''
        one = ''
        for key,val in a.items():
            if val > 1:
                freq += key
            else:
                one += key

        print(''.join(sorted(one)) if one else 'NONE')
        print(''.join(sorted(freq)) if freq else 'NONE')
main()