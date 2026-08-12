import sys

def main():
    data = sys.stdin.buffer
    while True and data:
        n = int(data.readline())
        if n == 0:
            break
        a = []
        for _ in range(n):
            x = int(data.readline())
            a.append(x)
        mn = min(a)
        mx = max(a)
        print(f"{mn} {mx}" if mx != mn else "BANG NHAU")
        

main()