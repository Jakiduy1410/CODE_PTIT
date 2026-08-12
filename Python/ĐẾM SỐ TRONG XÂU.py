def main():
    t = int(input())
    for _ in range(t):
        s = input().strip()
        b = input().strip()

        pos = 0
        cnt = 0
        while True:
            pos = s.find(b, pos)
            if pos == -1:
                break
            cnt += 1
            pos += len(b)

        print(cnt)

if __name__ == "__main__":
    main()
