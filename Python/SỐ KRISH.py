from math import factorial

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        sum_s = sum(factorial(int(ch)) for ch in s)
        print("Yes" if sum_s == int(s) else "No")

main()