import math

a, b = map(int, input().split())
res = []

start = 10 ** (b - 1)
end = 10 ** b - 1

for i in range(start, end + 1):
    if math.gcd(a, i) == 1:
        res.append(i)

for i in range(0, len(res), 10):
    print(" ".join(map(str, res[i:i+10])))
