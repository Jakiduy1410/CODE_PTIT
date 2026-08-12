
def prime(n: int):
    if n < 2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input().strip()
        a = int(s[0:3])
        b = int(s[len(s)-3:])
        print("YES" if prime(a) and prime(b) else "NO")


if __name__ == "__main__":
    main()