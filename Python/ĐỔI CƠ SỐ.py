
def calc(s,k) -> str:
    res = ""
    while s > 0:
        rem = s % k
        if rem <= 9:
            res += str(rem)
        else:
            res += chr(ord('A') + (rem - 10))
        s //= k
    res = res[::-1]
    return res

def main():
    t = int(input())
    for _ in range(t):
        s,k = map(int,input().split())
        print(calc(s,k))


main()