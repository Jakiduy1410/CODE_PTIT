first_char = ['2', '4', '6', '8']
second_char = ['0', '2', '4', '6', '8']

def backtrack(pos, mid, cur, a, res):
    if pos == mid:
        tmp = cur + cur[::-1]
        if int(tmp) < a:
            res.append(tmp)
        return

    if pos == 0:
        for ch in first_char:
            backtrack(pos + 1, mid, cur + ch, a, res)
    else:
        for ch in second_char:
            backtrack(pos + 1, mid, cur + ch, a, res)

t = int(input())
for _ in range(t):
    a = int(input().strip())
    res = []

    
    for mid in (1, 2, 3):
        backtrack(0, mid, "", a, res)

    res.sort(key=int)
    print(" ".join(res))
