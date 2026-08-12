
    
def main():
    s = input()
    n = int(input())
    a = {}
    for i in range(0, len(s), 2):
        tmp = s[i:i+2]
        if len(tmp) != 2:
            break
        a[tmp] = a.get(tmp, 0) + 1

    ok = False
    for key, count in sorted(a.items(), key=lambda x: int(x[0])):
        if count >= n:
            ok = True
            print(key, count)
    if not ok:
        print('NOT FOUND')
    
    

main()