
def sum_num(s:str):
    return sum(int(ch) for ch in s)
        

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(str,input().split()))
        res = {}
        for i in a:
            ans = sum_num(i)
            x = int(i)
            if ans not in res:
                res[ans] = []
            res[ans].append(x)
        for s in sorted(res.keys()):
            res[s].sort(key=int)
            for v in res[s]:
                print(v, end=" ")
        print()
            
            
main()