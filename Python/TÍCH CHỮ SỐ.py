
def main():
    t = int(input())
    for _ in range(t):
        s = input()
        res = 1
        for ch in s:
            if ch != '0':
                res *= int(ch)
        print(res)

if __name__ == "__main__":
    main()