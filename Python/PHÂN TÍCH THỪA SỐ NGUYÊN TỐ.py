t = int(input())
for _ in range(t):
    n = int(input())
    a = n
    res = {}

    while a % 2 == 0:
        res[2] = res.get(2, 0) + 1
        a //= 2

    i = 3
    while i * i <= a:
        while a % i == 0:
            res[i] = res.get(i, 0) + 1
            a //= i
        i += 2

    if a > 1:
        res[a] = res.get(a, 0) + 1

    print("1 *",end=" ")
    parts = []
    for p in sorted(res): 
        parts.append(f"{p}^{res[p]}")

    print(" * ".join(parts))
