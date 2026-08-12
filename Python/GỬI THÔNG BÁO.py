import sys

def decode(s, size):
    
    res = []
    len_sum = 0

    for word in s:
        add = len(word) if not res else 1 + len(word)  
        if len_sum + add <= size:
            res.append(word)
            len_sum += add
        else:
            break

    print(" ".join(res))

def main():
    
    n = int(input())
    for _ in range(n):
        s = input().split()
        decode(s, 100)

main()
