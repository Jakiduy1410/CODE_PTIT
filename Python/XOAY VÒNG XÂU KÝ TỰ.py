

def main():
    n = int(input())
    res = []
    for _ in range(n):
        x = input()
        res.append(x)
    
    tmp = res[0] + res[0]
    idx = 0
    st = []
    while idx < len(res[0]):
        st.append(tmp[idx:idx+len(res[0])])
        idx += 1
    ans = 1e9
    
    for target in st:
        ok = True
        total = 0
        for i in range(n):
            tmp = res[i] + res[i]
            pos = tmp.find(target)
            if pos < 0 or pos >= len(res[0]):
                ok = False
                break
            total += pos
        if ok:
            ans = min(ans,total)
    
    print(ans if ans != 1e9 else -1)

main()


