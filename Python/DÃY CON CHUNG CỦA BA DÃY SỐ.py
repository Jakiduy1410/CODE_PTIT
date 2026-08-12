
import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a = int(next(it)); b = int(next(it)); c = int(next(it))
        num1 = [int(next(it)) for _ in range(a)]
        num2 = [int(next(it)) for _ in range(b)]
        num3 = [int(next(it)) for _ in range(c)]
        x,y,z = 0,0,0
        found = False
        while x < a and y < b and z < c:
            if num1[x] == num2[y] and num2[y] == num3[z]:
                print(num1[x],end=" ")
                x += 1
                y += 1
                z += 1
                found = True
                continue

            
            mx = max(num1[x],num2[y],num3[z])
            if num1[x] < mx:
                x += 1
            if num2[y] < mx:
                y += 1
            if num3[z] < mx:
                z += 1
        if not found:
            print("NO")
        else:
            print()
main()