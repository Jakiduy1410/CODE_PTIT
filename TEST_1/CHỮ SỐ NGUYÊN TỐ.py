from itertools import product
import sys

def main():
    n = int(input())
    arr = ['2','3','5','7']
    for i in range(4,n+1):
        for x in product(arr,repeat=i):
            if len(set(x)) == 4 and x[-1] != '2':
                print(''.join(x))

main()