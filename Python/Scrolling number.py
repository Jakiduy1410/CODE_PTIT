import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    while True:
        a = int(next(it))
        if a == -1:
            break
        
        print((9 - (a%9)) + a)
        

main()