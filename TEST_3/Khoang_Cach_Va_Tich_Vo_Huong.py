import sys

def main():
    data = sys.stdin.buffer
    n = int(data.readline().decode())
    for _ in range(n):
        a = list(map(int, data.readline().decode().split()))
        b = list(map(int, data.readline().decode().split()))

        tong = sum((x - y)**2 for x,y  in zip(a,b))
        euculid = tong ** 0.5

        vohuong = sum((x*y) for x,y in zip(a,b))

        print(f"{euculid:.2f} {vohuong}")

main()