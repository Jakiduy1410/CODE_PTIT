
def check(a,b):
    for i in range(len(a)):
        if a[i] > b[i]:
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int,input().split()))
        b = list(map(int,input().split()))
        a.sort()
        b.sort()
        print("YES" if check(a,b) else "NO")

main()