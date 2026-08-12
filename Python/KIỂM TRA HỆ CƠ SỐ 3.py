
def solve(s: str) -> bool:
    for ch in s:
        if ch != '0' and ch != '1' and ch != '2':
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES" if solve(s) else "NO")
    
if __name__  == "__main__":
    main()