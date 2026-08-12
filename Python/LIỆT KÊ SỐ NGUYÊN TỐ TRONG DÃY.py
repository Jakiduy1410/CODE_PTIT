from collections import Counter

def prime(n:int):
    if n < 2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


def main():
    n = int(input())
    a = list(map(int,input().split()))
    res = Counter(a)
    for val,cnt in res.items():
        if prime(val):
            print(val,cnt,end="\n")


main()