
def prime(n):
    if n < 2:
        return False
    for i in range(2 , int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


def main():
    n = int(input())
    cnt = 0
    for i in range(2,n+1):
        if prime(i) and (i**8) < n:
            cnt += 1
        if i ** 8 > n:
            break
    for p in range(2,int(n**0.5)):
        if prime(p):
            for q in range(p,int(n**0.5)):
                if prime(q):
                    if ((p*q) ** 2) < n and p != q:
                        cnt += 1
                    
                    if (p*q) ** 2 > n:
                        break

    print(cnt)


main()