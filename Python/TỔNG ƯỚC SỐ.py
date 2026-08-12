
def prime(n:int):
    sum_num = 0
    if n % 2 == 0:
        while n % 2 == 0:
            sum_num += 2
            n //= 2
    i = 3
    while i*i <= n:
        if n % i == 0:
            while n % i == 0:
                sum_num += i
                n //= i
        i += 2
    if n > 1:
        sum_num += n
    return sum_num

def main():
    res = 0
    t = int(input())
    for _ in range(t):
        n = int(input())
        res += prime(n)
    print(res)


main()