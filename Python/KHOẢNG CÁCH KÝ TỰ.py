
def check(s,r):
    for i in range(1,len(s)):
        l1 = abs(ord(s[i]) - ord(s[i-1]))
        l2 = abs(ord(r[i]) - ord(r[i-1]))
        if l1 != l2:
            return False
    return True


t = int(input())
for _ in range(t):
    s = input()
    r = s[::-1]
    print("YES" if check(s,r) else "NO")
    
