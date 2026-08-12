import math

t = int(input())
for _ in range(t):
    a, b, c = map(float, input().split())
    b /= 100
    res = math.ceil(math.log(c / a) / math.log(1 + b))
    print(res)
