import sys

def main():
    data = sys.stdin.buffer
    n = int(data.readline().strip())
    for _ in range(n):
        a = list(map(int, data.readline().split()))
        b = list(map(int, data.readline().split()))

        tong = sum(abs(x-y) for x,y in zip(a,b))
        print(f'{tong:.6f}')

main()