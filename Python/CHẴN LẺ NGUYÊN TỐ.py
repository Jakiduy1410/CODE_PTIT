
def prime(n: int):
    if n < 2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def check(s: str):
    sum_s = sum(int(ch) for ch in s)
    if not prime(sum_s):
        return False
    if any(int(ch) % 2 != 0 for ch in s[0::2]):
        return False
    if any(int(ch) % 2 == 0 for ch in s[1::2]):
        return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES" if check(s) else "NO")

if __name__ == "__main__":
    main()