
def check(s: str):
    if len(s) % 2 == 0:
        return False
    if s[0] == s[1]:
        return False
    if(len(set(s[0::2])) != 1):
        return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES" if check(s) else "NO")

if __name__ == "__main__":
    main()