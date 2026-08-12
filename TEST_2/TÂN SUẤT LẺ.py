from collections import Counter
import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    out_lines = []
    for _ in range(t):
        n = int(next(it))
        a = [int(next(it)) for _ in range(n)]
        cnt = Counter(a)
        odd_numbers = [str(num) for num, freq in cnt.items() if freq % 2 == 1]
        print(''.join(odd_numbers))


main()