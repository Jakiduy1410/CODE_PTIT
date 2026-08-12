def main():
    n = int(input().strip())
    a = list(map(int, input().split()))
    cnt = 0
    for i in range(1, n):
        if a[i] != a[i-1]:
            cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()
