
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
        s = input()
        len_s = len(s)
        cnt = 0
        for ch in s:
            tmp = int(ch)
            if prime(tmp):
                cnt += 1
        print("YES" if prime(len_s) and cnt*2 > len_s else "NO")

if __name__ == "__main__":
    main()
