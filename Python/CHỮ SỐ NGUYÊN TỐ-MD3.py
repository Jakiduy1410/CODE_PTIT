import sys
from itertools import permutations,combinations,product

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    list = ['2','3','5','7']
    for i in range(4,n+1):
        for comb in product(list,repeat=i):
            if len(set(comb)) == 4 and comb[-1] != '2':
                print(''.join(comb))

main()