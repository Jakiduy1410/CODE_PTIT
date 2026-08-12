
def prime(n: int):
    if n < 2:
        return False
    for i in range(2,int(n**0.5) +1):
        if n % i == 0:
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        sum_num = sum(int(ch) for ch in s)
        print("YES" if prime(sum_num) else "NO")

if __name__ == "__main__":
    main()