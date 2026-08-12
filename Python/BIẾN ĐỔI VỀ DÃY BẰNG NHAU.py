import sys

def main():
    data = sys.stdin.read().split()
    it = iter(data)
    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    val = 0
    min_step = 1e9
    for x in a:
        tmp = 0
        cur = x
        for x in a:
            tmp += abs(cur - x)
        if tmp < min_step:
            min_step = tmp
            val = cur
    print(min_step,val)

main()