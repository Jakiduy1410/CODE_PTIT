def main():
    t = int(input())
    for _ in range(t):
        s = input().strip()

        sum_num = sum(int(ch) for ch in s[1::2])

        res = 1
        if len(set(s[0::2])) == 1 and s[0] == '0':
            res = 0
        else:
            for i, ch in enumerate(s):
                if i % 2 == 0:
                    if ch != '0':
                        res *= int(ch)

        print(res,sum_num)


if __name__ == "__main__":
    main()
