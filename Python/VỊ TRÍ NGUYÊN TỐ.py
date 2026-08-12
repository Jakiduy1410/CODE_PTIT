
def prime(n: int):
    if n < 2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def check(s: str):
    for pos,ch in enumerate(s):
        if prime(pos):
            if not prime(int(ch)):
                return False
        else:
            if prime(int(ch)):
                return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES" if check(s) else "NO")

if __name__ == "__main__":
    main()