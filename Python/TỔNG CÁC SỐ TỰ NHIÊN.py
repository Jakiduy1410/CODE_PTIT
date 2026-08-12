import sys

s = [[0] * 1000]
tmp = []

def bt(n,target):
    sum_num = sum(tmp)
    if sum_num == target:
        s.append(tmp[:])
        return
    if n <= 0 or sum_num > target:
        return
   
    tmp.append(n)
    bt(n,target)
    tmp.pop()

    bt(n-1,target)


    


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        s.clear()
        bt(n,n)
        print(len(s))
        for i in range(len(s)): 
            print(f"({' '.join(map(str,s[i]))})", end=" ")
        print()
            

main()