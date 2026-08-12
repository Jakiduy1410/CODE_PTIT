import math

t = int(input())
for _ in range(t):
    a = int(input())
    if a % 2 == 0:
        start = 2
    else:
        start = 1
    
    sum_num = 0.0
    for i in range(start,a+1,2):
        sum_num += float(1 / i)
    print(f"{sum_num:.6f}")