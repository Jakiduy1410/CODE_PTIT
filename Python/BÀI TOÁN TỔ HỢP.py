
from itertools import combinations

def main():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    nums = sorted(set(a))
    for i in combinations(nums,k):
        print(" ".join(map(str,i)))


main()