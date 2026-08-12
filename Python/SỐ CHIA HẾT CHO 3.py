

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        sum_s  = sum(int(ch) for ch in s)
        print("YES" if sum_s % 3 == 0 else "NO")

if __name__ == "__main__":
    main()