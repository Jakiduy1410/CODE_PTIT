import sys

def main():
    n = int(input())
    s = ''
    s = ''.join(str(i) for i in range(n))
    r = ''.join(str(i) for i in range(1,n))
    res = r[::-1] + s
    #(res)
    for i in range(n,0,-1):
        print(' '.join(res[i-1:i+n-1]))

main()