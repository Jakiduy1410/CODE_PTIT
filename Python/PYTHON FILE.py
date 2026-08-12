
def check(s:str):
    if s[len(s)-2::] != "py":
        return False
    for ch in s[:len(s) - 2]:
        if not(ch.isalpha() or ch == '.' or ch == '_'):
            return False
    return True
def main():
    s = input()
    print("yes" if check(s) else "no")

if __name__ == "__main__":
    main()