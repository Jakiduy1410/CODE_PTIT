import sys

def main():
    data = sys.stdin.read().split() 
    it = iter(data)
    n = int(next(it))
    arr = []
    for _ in range(n):
        arr.append(int(next(it)))

    start = end = 1
    cur = 0
    mx = -float('inf') 
    start_tmp = end_tmp = 0
    for i in range(len(arr)):
        cur += arr[i]
        
        if cur > mx:
            mx = cur
            start = start_tmp + 1
            end = i + 1

        if cur < 0:
            cur = 0
            start_tmp = i + 1
            end_tmp = i
        else:
            end_tmp = i + 1

    print(start, end, mx) 

main()