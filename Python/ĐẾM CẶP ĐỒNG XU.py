from math import comb

def main():
    n = int(input().strip())
    row = [0]*n
    col = [0]*n

    for i in range(n):
        tmp = input().strip()
        for pos,ch in enumerate(tmp):
            if ch == 'C':
                row[i] += 1
                col[pos] += 1

    res = 0
    for i in range(n):
        res += comb(row[i], 2)
        res += comb(col[i], 2)

    print(res)

main()
