f = [0]*93
def fib():
    f[1] = f[2] = 1
    for i in range(3,93):
        f[i] = f[i-1] + f[i-2]
    return

def main():
    fib()
    t = int(input())
    for _ in range(t):
        l,r = map(int,input().split())
        for i in range(l,r+1):
            print(f[i],end=" ")
        print(end="\n")

main()