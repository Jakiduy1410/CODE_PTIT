
p = [True]* 1005

def seive():
    p[0] = p[1] = False
    for i in range(2,int(1005**0.5) + 1):
        if p[i]:
            for j in range(i*i,1005,i):
                p[j] = False

    


def main():
    seive()
    n,x = map(int,input().split())
    res = [i for i in range(0,1005) if p[i]]
    res = res[:n]
    print(x,end=" ")
    for i in res:
        print(x+i,end=" ")
        x += i
    
if __name__ == "__main__":
    main()