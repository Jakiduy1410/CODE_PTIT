def prime(n:int):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def check(s:str):
    x = int(s)
    rx = int(s[::-1])
    return prime(x) and prime(rx) and x != rx

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        res = []
        for k in range(2, n):
            rk = int(str(k)[::-1])
            if k < rk and prime(k) and prime(rk) and k != rk:
                res.append(str(k))
                res.append(str(rk))
        print(" ".join(res))

if __name__ == "__main__":
    main()
