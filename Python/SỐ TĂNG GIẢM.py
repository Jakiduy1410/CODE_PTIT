t = int(input())
for _ in range(t):
    s = input().strip()
    n = len(s)

    if n < 3:
        print("NO")
        continue

    pos = 1

    while pos < n and s[pos] > s[pos - 1]:
        pos += 1

    
    if pos == 1 or pos == n:
        print("NO")
        continue


    while pos < n and s[pos] < s[pos - 1]:
        pos += 1

    print("YES" if pos == n else "NO")
