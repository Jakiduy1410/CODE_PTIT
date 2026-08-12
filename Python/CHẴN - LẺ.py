def check(s):
    for i in range(1, len(s)):
        if abs((ord(s[i]) - ord('0')) - (ord(s[i-1]) - ord('0')))!= 2:
            return False
    return True

t = int(input())
for _ in range(t):
    s = input().strip()
    sum_s = sum(int(ch) for ch in s)
    print("YES" if check(s) and sum_s % 10 == 0 else "NO")
