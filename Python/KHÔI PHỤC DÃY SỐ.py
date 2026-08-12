import sys

def main():
    n = int(sys.stdin.readline()) 
    
    b0 = []
    total = 0
    
    for i in range(n):
        row = sys.stdin.readline().split() 
        for j in range(n):
            val = int(row[j])
            if i == 0:
                b0.append(val)
            if j > i:
                total += val   
                
    if n == 2:
        print(b0[1] // 2, b0[1] // 2)
        return
        
    rem = -(n-2)
    total = total // (n-1)
    for x in b0:
        total -= x
    
    a = total // rem
    print(a, end=" ")
    for i in range(1, n):
        print(b0[i] - a, end=" ")

main()