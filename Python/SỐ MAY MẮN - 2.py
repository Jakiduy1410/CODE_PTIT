
def check(s):
    for ch in s:
        if ch != '4' and ch != '7':
            return False
    return True



t = int(input())
for _ in range(t):
    s = input()
    print("YES" if check(s) else "NO")