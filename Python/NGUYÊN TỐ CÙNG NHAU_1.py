from itertools import combinations
from math import gcd
def main():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    for comb in combinations(a,2):
        if gcd(comb[0],comb[1]) == 1:
            print(comb[0] , comb[1],end="\n")
    


main()
