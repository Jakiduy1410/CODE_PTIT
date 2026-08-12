
t = int(input())
for _ in range(t):
    s = input()
    len_s = len(s)
    s1 = s[:2]
    s2 = s[len_s-2:]
    print("YES" if s1 == s2 else "NO")