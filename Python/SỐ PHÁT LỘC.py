
t = int(input())
for _ in range(t):
    s = input()
    s = s[len(s) - 2::]
    print("YES" if s == "86" else "NO")