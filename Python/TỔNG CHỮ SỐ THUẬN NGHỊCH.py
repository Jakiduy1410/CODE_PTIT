


def main():
    t = int(input())
    for _ in range(t):
        s = input()
        sum_num = sum(int(ch) for ch in s)
        sum_num = str(sum_num)
        print("YES" if sum_num == sum_num[::-1] and len(sum_num) >= 1 else "NO")



if __name__ == "__main__":
    main()