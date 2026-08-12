import math

t = int(input())
for _ in range(t):
    a = input()
    b = a[::-1]
    a,b = int(a),int(b)
    print("YES" if math.gcd(a,b) == 1 else "NO")