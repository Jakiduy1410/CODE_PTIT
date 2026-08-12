import sys



def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    a.sort()
    ok = []

    for i in range(1,a[0]):
        tmp = a[0] // i
        if tmp not in ok:
            ok.append(tmp)

    res = 1e9
    for x in ok:
        if x == 0:
            continue
        arr = []
        found = True
        for i in range(0,len(a)):
            bi = (a[i] // (x + 1)) + 1
            
            if a[i] // bi == x:
                arr.append(bi)
            else:
                found = False
                break
        if found:
            sum_num = sum(i for i in arr)
            if sum_num < res:
                res = sum_num
    print(res)
        

main()