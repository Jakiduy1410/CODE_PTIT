
def prime(n:int):
    if n < 2:
        return False
    for i in range(2,int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def check(s:str):
    if not prime(int(s)):
        return False
    if not prime(int(s[::-1])):
        return False
    sum_s = 0
    for ch in s:
        if not prime(int(ch)):
            return False
        else:
            sum_s += int(ch)
    if not prime(sum_s):
        return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("Yes" if check(s) else "No")

if __name__ == "__main__":
    main()