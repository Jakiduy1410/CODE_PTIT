import sys
from math import sqrt
def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = int(next(it))
        target = int(next(it))
        arr = []
        for _ in range(n):
            x = int(next(it))
            y = int(next(it))
            arr.append((x,y))

        ok = False
        
        for i in range(0,len(arr)-2):
            for j in range(i+1,len(arr)-1):
                for k in range(j+1, len(arr)):
                    x1,y1 = arr[i][0],arr[i][1]
                    x2,y2 = arr[j][0],arr[j][1]
                    x3,y3 = arr[k][0],arr[k][1]

                    D = 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))

                    if abs(D) < 1e-9:
                        continue

                    sq1 = (x1 ** 2 + y1 ** 2)
                    sq2 = (x2 ** 2 + y2 ** 2)
                    sq3 = (x3 ** 2 + y3 ** 2)

                    Ux = (sq1 * (y2 - y3) + sq2 * (y3 - y1) + sq3 * (y1 - y2)) / D
                    Uy = (sq1 * (x3 - x2) + sq2 * (x1 - x3) + sq3 * (x2 - x1)) / D

                    R2 = (x1 - Ux) ** 2 + (y1 - Uy)**2

                    cnt = 0
                    for m in range(len(arr)):
                        if m == i or m == j or m == k:
                            continue
                        xm,ym = arr[m][0], arr[m][1]
                        
                        dist = (xm - Ux) ** 2 + (ym - Uy) ** 2
                        if dist < R2:
                            cnt += 1
                    
                    if cnt == target:
                        ok = True
                        break
                if ok: break
            if ok: break
        print('YES' if ok else 'NO')

main()