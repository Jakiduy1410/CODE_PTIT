import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a = next(it).decode()
        b = next(it).decode()
        tmp1,tmp2 = [],[]
        for ch in a:
            tmp1.append(ch)
        for ch in b:
            tmp2.append(ch)
        tmp1.sort(); tmp2.sort()
        print("Test", str(_+1) + ":", "YES" if tmp1 == tmp2 else "NO"  )
        
if __name__ == "__main__":
    main()