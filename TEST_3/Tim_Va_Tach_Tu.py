import sys

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    for _ in range(n):
        s1 = data.readline().decode().split()
        s2 = data.readline().decode().split()
        for i in range(len(s1)):
            s1[i] = s1[i].lower()
        
        for i in range(len(s2)):
            if s2[i].lower() in s1:
                print(s2[i], end=' ')
        print()
        
main()