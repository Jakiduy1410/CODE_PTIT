import math

def check(s:str, r:str):
    for i in range(1,len(s)):
        a = (ord(s[i]) - ord(s[i-1]))
        b = (ord(r[i]) - ord(r[i-1]))
        if math.fabs(a) != math.fabs(b):
            return False
    return True


def main():
    t = int(input())
    for _ in range(t):
        s = input()
        r = s[::-1]
        print("YES" if check(s,r) else "NO")

if __name__ == "__main__":
    main()