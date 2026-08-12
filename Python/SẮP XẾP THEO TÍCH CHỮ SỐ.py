

def multi(s:str):
    res = 1
    for ch in s:
        res *= int(ch)
    return res

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(str,input().split()))
        res = {}
        for i in a:
            ans = multi(i)
            val = int(i)
            if ans not in res:
                res[ans] = []
            res[ans].append(i)
        
        for i in sorted(res.keys()):
                res[i].sort(key=int)
                for val in res[i]:
                    print(val,end=" ")

main()