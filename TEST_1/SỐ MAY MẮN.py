from collections import Counter

def main():
    s = input()
    d = Counter(s)
    res = 0
    for key,val in d.items():
        if key == '4' or key == '7':
            res += val
    print("YES" if res == 4 or res == 7 else 'NO')

main()