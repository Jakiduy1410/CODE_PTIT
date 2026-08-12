import sys

def main():
    data= sys.stdin.buffer.read().split()
    it = iter(data)
    a = int(next(it))
    b = int(next(it))
    print(a-b)

main()