def main():
    t = int(input())
    for _ in range(t):
        s = input().strip()

        sum_num = sum(int(ch) for ch in s[0::2])

        res = 1
        if len(set(s[1::2])) == 1 and s[1] == '0':
            res = 0
        else:
            for i, ch in enumerate(s):
                if i % 2 == 1:
                    if ch != '0':
                        res *= int(ch)

        print(sum_num, res)


if __name__ == "__main__":
    main()
