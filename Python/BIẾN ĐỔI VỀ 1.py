

def main():
    while True:
        n = int(input())
        if n == 0:
            break
        cnt = 1
        while n != 1:
            if n % 2 == 0:
                cnt += 1
                n //= 2
            else:
                cnt += 1
                n = (n*3)+1
        print(cnt)

main()