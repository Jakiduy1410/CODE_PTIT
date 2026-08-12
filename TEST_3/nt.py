import sys

p = [True] * int(10**6)

def seive():
    p[0] = p[1] = False
    for i in range(2, int(len(p) ** 0.5) +1 ):
        if p[i]:
            for j in range(i*i, len(p), i):
                p[j] = False

def main():
    seive()
    a = int(input())
    b = int(input())
    for i in range(a,b+1):
        if p[i]:
            print(i, end=' ') 

main()