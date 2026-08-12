import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        s = next(it).decode()
        tong = 0
        tich = 1
        for pos,val in enumerate(s,1):
            if pos % 2 != 0:
                if val != '0':
                    tich *= int(val)
            else:
                tong += int(val)
        
        print(f"{(tich / tong):.6f}" if tong != 0 else 'INVALID')


main()